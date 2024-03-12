#include <stdio.h>
#include <conio.h>
#include <malloc.h>
void enqueue(int);
void dequeue();
void display();
struct node
{
	int data;
	struct node *next;
};
struct node *front=NULL;
struct node * rear=NULL;
void main()
{
	int n,ch;
	do
	{
		printf("Enter your choice");
		printf("\n1:enqueue \n2:dequeue \n3:display \n4:exit");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("enter number");
			scanf("%d",&n);
			enqueue(n);
			break;
			case 2:
			dequeue();
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
void enqueue(int item)
{
    struct node *nptr;
	if(rear==NULL)
	{
		front=nptr;
		rear=nptr;
	}
	else
	{
		struct node *nptr=malloc(sizeof(struct node));
		nptr->data=item;
		nptr->next=NULL;
		rear->next=nptr;
		rear=rear->next;
	}
}
void dequeue()
{
	if(front==NULL)
	{
		printf("queue is empty");
	}
	else
	{
		struct node *temp;
		temp=front;
		front=front->next;
		printf("%d deleted",temp->data);
		free(temp);
	}
}
void display()
{
	struct node *temp;
	printf("\n");
	if(front==NULL)
	{
		printf("queue is empty");
	}
	while(temp!=NULL)
	{
		printf("%d",temp->data);
		temp=temp->next;
	}
}