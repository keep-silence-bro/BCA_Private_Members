#include<stdio.h>
#include<conio.h>
void main()
{
	int i,size,j;
    int arr[23,34,44,56,67,78,45];
	
	for(i=0;i<=size-1;i++)
    {
        for(j=i=1;j<size-i-1;j++)
        {
            if(arr[i]>arr[j])
            {
                int t;
                t=arr[i];
                arr[i]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
getch();
}