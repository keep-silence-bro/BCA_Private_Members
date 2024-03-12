#include<stdio.h>
#include<conio.h>
#define max 5
int queue[max];
int front=0,rear=0;
void enqueue();
void dequeue();
void display();
void exit();
void main()
{
int ch;
do
{
    printf("Enter your choice");
    printf("\n1:enqueue\n2:dequeue\n3:display\n4:exit");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
    enqueue();
    break;
    case 2:
    dequeue();
    break;
    case 3:
    display();
    break;
    case 4:
    exit(0);
   default:
   printf("\ninvalid choice"); 
     }
}while(ch!=4);
getch();
}
void enqueue()
{
int item;
if(rear==max)
{
    printf("queue is full");
}
else
{
    printf("enter the item");
    scanf("%d",&item);
    queue[rear]=item;
    rear++;
    }
}
void dequeue()
{
if(front==rear)
{
    printf("queue is empty");
}
else
{
    printf("the deleted item is %d",queue[front]);
    front++;
}
}
void display()
{
int i;
if(front==rear)
{
    printf("queue is empty");
}
else
{
    for(i=front;i<rear;i++)
    {
        printf("%d",queue[i]);
    }
}
}