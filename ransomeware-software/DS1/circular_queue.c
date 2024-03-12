#include<stdio.h>
#include<conio.h>
#define max 5
int queue[max];
int rear=0;
int front=0;
int count=0;
void   enqueue();
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
    exit();
    break;
    }
    }while(ch!=4);
    getch();
    }
    void enqueue()
    {
    int item;
    if(count==max)
    printf("queue is full");
    else
    {
    printf("enter item");
    scanf("%d",&item);
    queue[rear]=item;
    rear=(rear+1)%max;
    count++;
    }
    }
    void dequeue()
    {
    if(count==0)
    printf("queue is empty");
    else
    {  
        printf("removed element is=%d",queue[front]);
        front=(front+1)%max;
        count--;
    }
    }
    void display()
    {
    int i;
    if(count==0)
    printf("queue is empty");
    else
    {
        for(i=front;i!=rear;i=(i+1)%max)
        printf("%d",queue[i]); 
    }
    }
        