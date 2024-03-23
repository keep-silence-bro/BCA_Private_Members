#include<stdio.h>
#include<conio.h>
void main()
{
	int first,last,mid,i,size,num,arr[100],pos=-1;
	printf("\nEnter size of array");
	scanf("%d",&size);
	for(i = 0; i < size; i++)
	{
		printf("\nEnter the element to store in array");
		scanf("%d",&arr[i]);
	}
	printf("\nEnter the element to search in an array");
	scanf("%d",&num);
	first=0;
	last=size-1;
	while (first<=last)
	{
		mid=(first+last)/2;
		if(arr[mid]==num)
		{
			pos=mid;
			break;
		}
	}
	if (arr[mid]<num)
	{
		last=mid+1;
	}
	if (arr[mid]>num)
	{
		first=mid-1;
	}
	if (pos==-1)
	{
		printf("%d is not found",num);
	}
	else
	{
		printf("%d is found at %d position ",num,pos+1);
	}
getch();
}