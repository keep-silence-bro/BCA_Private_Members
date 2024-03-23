#include<stdio.h>
#include<conio.h>
void main()
{
	int i,size,num,arr[100],pos=-1;
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
        arr[i+1]=arr[i];
    }
    arr[pos]=num;
getch();
}