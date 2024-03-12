#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define max 3
int top=-1;
int stack[max];
void push();
void pop();
void display();
void main()
{
    int ch;
    do{
        printf("\nEnter your choice");
        printf("\n1:push\n2:pop\n3:display\n4:exit");
        scanf("%d",&ch);
        switch (ch)
        {
        case  1:
        push();
        break;
         case  2:
        pop();
        break;
         case  3:
        display();
        break;
         case  4:
        exit(0);
        default:
        printf("\n invalid choice");
        }
    }while(ch!=4);
    getch();
}
void push()
{
    int ele;
    if(top==max-1)
    printf("stack is full or overflow");
    else
    {
        printf("Enter element to be inserted to stack");
        scanf("%d",&ele);
        top++;
        stack[top]=ele;
    }
}
void pop()
{
    if(top==-1)
    printf("stack is empty or underflow");
    else
    {
        printf("deleted element is %d",stack[top]);
        top=top-1;
    }
}
void display()
{
    int i;
    if(top==-1)
    printf("stack is empty");
    else
    {
        for(i=top;i>=0;i--)
        {
            printf("%d",stack[i]);
        }
    }
}