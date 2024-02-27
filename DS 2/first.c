#include<stdio.h>
#include<conio.h>
void linearsearch(int,int);
void main()
{
	int i,size,num,arr[100],k=0;
	printf("\nEnter size of array");
	scanf("%d",&size);
	for(i = 0; i < size; i++)
	{
		printf("\nEnter the element to store in array");
		scanf("%d",&arr[i]);
	}
	printf("\nEnter the element to search in an array");
	scanf("%d",&num);
	void linearsearch(arr,num);
	getch();
}
void linearsearch(int arr,int num)
{
	for (i = 0; i < size; i++)
	{
		if(arr[i]==num)
		{
			k=1;
			break;
		}
	}
	if(k==0)
	{
		printf("%d is not found ", num);
	}
	else
	{
		printf("%d is found ",num);
	}
}