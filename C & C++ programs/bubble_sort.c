#include<stdio.h>
#include<conio.h>
void main()
{
	int i,size,num,arr[100],j;
	printf("\nEnter size of array");
	scanf("%d",&size);
	for(i = 0; i < size; i++)
	{
		printf("\nEnter the element to store in array");
		scanf("%d",&arr[i]);
	}
	printf("\nEnter the element to search in an array");
	scanf("%d",&num);

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