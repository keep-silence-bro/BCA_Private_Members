#include<stdio.h>
#include<conio.h>
int fact(int x);
void main()
{
    int n,factorial;
    printf("Enter the number");
    scanf("%d",&n);
    factorial=fact(n);
    printf("\nThe Factorial is %d",factorial);
    getch();
}
int fact(int x)
{
    int i;
    if( x==1)
    return(1);
    else
    i=x*fact(x-1);
    return (i);
}