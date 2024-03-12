#include <stdio.h>
#include <conio.h>
#include <malloc.h>
void push();
void pop();
void display();
struct node
{
	int data;
	struct node *next;
};
struct node *top=NULL;
void main()
{
	int ch;
	do
	{
		printf("Enter your choice");
		printf("\n1:push \n2:pop \n3:display \n4:exit");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:push();
			break;
			case 2:
			pop();
			break;
			case 3:display();
			break;
			case 4:exit(0);
			default:
			printf("\n invalid choice");
		}
	}while(ch!=4);
	getch();
}
void push()
{
	int ele;
	struct node *nnode=malloc(sizeof(struct node));
	printf("Enter element");
	scanf("%d",&ele);
	nnode->data=ele;
	nnode->next=top;
	top=nnode;
}	
void pop()
{
	struct node *temp;
	temp=top;
	if(top==NULL)
		printf("stack is empty");
	else
	{
		printf("removed element is %d",temp->data);
		top=top->next;
		free(temp);
	}
}
void display()
{
	struct node *temp;
	temp=top;
	while(temp!=NULL)
	{
		printf("\n %d is ",temp->data);
		temp=temp->next;
	}
}