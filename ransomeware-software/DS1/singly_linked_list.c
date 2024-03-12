#include<stdio.h> 
#include<conio.h> 
#include<stdlib.h> 
int cnt(); 
void in_start(); 
void in_last(); 
void in_loc(); 
void display(); 
void del_loc(); 
struct node 
{ 
int data; 
struct node *nxt; 
}; 
struct node *head,*tmp; 
struct node *last=NULL; 
void main() 
{ 
int ch; 
do 
{ 
printf("\n1:Insert At Last \n2:Insert at Start/Head\n3:Display\n4:Exit\n"); 
printf("5:insert at specific Location\n6:Delete the Element\n"); 
printf("ENTER U R CHOICE "); 
scanf("\t\t%d",&ch); 
switch(ch) 
{ 
case 1:in_last(); 
 break; 
case 2:in_start(); 
 break; 
case 3:display(); 
 break; 
case 4:exit(0); 
case 5:in_loc(); 
break; 
case 6:del_loc(); break; 
 default :printf("\nEnter Correct choice...");
} 
}while(ch!=4); 
getch(); 
} 
// insert element at last of list 
void in_last() 
{ 
tmp=(struct node*)malloc (sizeof (struct node)); 
printf("\nEnter element to be insert at Last or ENd of LIST\n"); 
scanf("%d",&tmp->data); 
tmp->nxt=NULL; 
if(last==NULL) 
{ 
head=last=tmp; 
} 
else 
{ 
last->nxt=tmp; 
last=tmp; 
} 
last->nxt=NULL; 
} 
int cnt(struct node *ptr) 
{ 
int count=0; 
while(ptr!=NULL) 
{ 
count++; 
ptr=ptr->nxt; 
} 
return (count); 
} 
void in_start() 
{ 
tmp=(struct node*)malloc(sizeof(struct node)); 
printf("Enter the data to be insert at First/start"); 
scanf("%d",&tmp->data); 
tmp->nxt=head; 
head=tmp; 
} 
void in_loc() 
{ 
int loc,nodectr; 
struct node *tmp1; 
printf("\n\tEnter the location to insert\t"); 
scanf("%d",&loc); 
nodectr=cnt(head); 
 if(loc>=1&&loc<=nodectr) 
 { 
tmp=(struct node*)malloc(sizeof(struct node)); 
printf("\n\t\tEnter the element"); 
scanf("\n%d",&tmp->data); 
tmp1=head; 
while(loc-1>0) 
{ 
loc--; 
tmp1=tmp1->nxt; 
} 
tmp->nxt=tmp1->nxt; 
tmp1->nxt=tmp; 
} 
else 
printf("\nPosition Not Found\n"); 
} 
void display() 
{ 
int c; 
c=cnt(head); 
if(c==0) 
printf("\nLIST IS EMPTY INSERT THE ELEMENT\n "); 
tmp=head; 
while(tmp!=NULL) 
{ 
printf("%d==>",tmp->data); 
tmp=tmp->nxt; 
} 
printf("\n"); 
} 
void del_loc() 
{ 
int loc; 
printf("\n\tENTER THE LOCATION TO DELETE\n\t"); 
scanf("\t%d",&loc); 
if(loc>cnt(head)) 
{ 
printf("\n--------LOCATION NOT FOUND----------\n"); 
} 
else if(loc==1) 
{ 
tmp=head; 
head=tmp->nxt;
tmp->nxt=NULL; 
free(tmp); 
} 
else 
{ 
struct node *p=head,*q; 
int i=1; 
while(i<loc-1) 
{ 
 p=p->nxt; 
 i++; 
} 
 q=p->nxt; 
 p->nxt=q->nxt; 
 q->nxt=NULL; 
 free(q); 
} 
display(); 
} 
