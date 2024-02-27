#include<stdio.h>
#include<conio.h>
void selection_sort(int,int,int,int[]);
void main()
{
	int i,j,size,arr[100];
	printf("\nEnter size of array");
	scanf("%d",&size);
	for(i = 0; i < size; i++)
	{
		printf("\nEnter the element to store in array");
		scanf("%d",&arr[i]);
	}
    selection_sort(i,j,size,arr);
getch();
}
void selection_sort(int i,int j,int size,int arr[])
{
	for(i=0;i<size-2;i++)
    {
        for(j=i=1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                int t;
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
    printf("sorted array is");
    printf("[");
    for(i=0;i<size;i++)
    {
        printf("\t%d",arr[i]);
    }
    printf("]");
}