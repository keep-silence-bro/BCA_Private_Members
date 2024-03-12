#include <stdio.h>
#include <conio.h>
int sum(int a);
void main()
{
    int num,res;
    printf("Enter number to find sum of digit");
    scanf("%d",&num);
    res=sum(num);
    printf("The result is = %d",res);
    getch();
}
int sum(int a)
{
    int r,sum=0;
    if(a==0)
    {
        return(0);
    }
    else{
        while(a>0)
        {
            r=a%10;
            sum=sum+r;
            a=a/10;
        }
        return(sum);
    }
}