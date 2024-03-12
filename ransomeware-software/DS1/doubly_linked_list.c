#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
struct node *prev;
struct node *next;
int data;
};
struct node *head;
void insertion();
void deletion();
void display();
void main ()
{
int choice;
printf("\n1.insert \n2.Delete \n3.Display \n4.Exit\n");
while(choice != 4)
{
printf("\nEnter your choice:");
scanf("\n%d",&choice);
switch(choice)
{
case 1:
insertion();
break;
case 2:
deletion();
break;
case 3:
display();
break;
default:
break;
}
}
getch();
}
void insertion()
{
struct node *ptr,*temp;
int item;
ptr = (struct node *) malloc(sizeof(struct node));
if(ptr == NULL)
{
printf("Not Allocated the memory");
}
else
{
printf("\nEnter value:");
scanf("%d",&item);
ptr->data=item;
if(head == NULL)
{
ptr->next = NULL;
ptr->prev = NULL;
head = ptr;
}
else
{
temp = head;
while(temp->next!=NULL)
{
temp = temp->next;
}
temp->next = ptr;
ptr ->prev=temp;
ptr->next = NULL;
}
}
printf("\n node inserted\n");
}
void deletion()
{
struct node *ptr,*temp;
if(head == NULL)
{
printf("\n Empty list");
}
else if(head->next == NULL)
{
head = NULL;
free(head);
printf("\n node deleted\n");
}
else
{
temp=head;
while(temp->next!=NULL)
{
ptr=temp;
temp=temp->next;
}
temp->prev=NULL;
ptr->next=NULL;
printf("node deleted");
}
}
void display()
{
struct node *ptr;
if(head==NULL)
{
printf("Empty list");
}
else
{
printf("\n printing values...\n");
ptr = head;
while(ptr!=NULL)
{
printf("%d-> ",ptr->data);
ptr=ptr->next;
}
}
}