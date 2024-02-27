#include<stdio.h>
#include<conio.h>
int i,j,size;
void insertionsort(int[]);
void main()
{
    int a[100];
    printf("ENTER THE SIZE OF ARRAY");
    scanf("%d",&size);
    printf("ENTER THE ELEMENT OF ARRAY");
    for ( i = 0; i < size; i++)
    {
        scanf("%d",&a[i]);
        
    }
    insertionsort(a);
    getch();
}
void insertionsort(int a[])
{
    int k,t;
    for(i=0;i<size-1;i++)
    {
        for(j=i+1;j<size-1;j++)
        {
            if(a[i]>a[j])
            {
            t=a[j];
            for(k=j-1;k>=i;k--)
            {
                a[k+1]=a[k];
            }
            a[i]=t;
            }
        }
    }
    printf("sorted array =");
    printf("[");
    for ( i = 0; i < size; i++)
    {
        printf("\t%d",a[i]);
    }
    printf("]");
}