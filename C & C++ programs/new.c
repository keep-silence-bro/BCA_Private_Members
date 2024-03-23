#include<stdio.h>
#include<conio.h>
void indexseqsearch(int [],int,int);
void seqsearch(int [],int,int,int);
void main()
{
int a[]={2,5,15,34,44,54,60,67},size,no,i;		

size=sizeof(a)/sizeof(a[0]);
printf("Array elements are\n");
for(i=0;i<size;i++)
	{
		printf("%d   ",a[i]);
	}
	printf("\nEnter number to search\n");
	scanf("%d",&no);
indexseqsearch(a,size,no);
	getch();
}
void indexseqsearch(int a[],int size,int no)
{
int index[10],i,blksize,start,end,x=0,flag=0;
//printf("%d\n",no);
printf("\nEnter block size");
scanf("%d",&blksize);
for(i=0;i<size;i=i+blksize)
index[x++]=i;
printf("\nIndex array are\n");
for(i=0;i<x;i++)
printf("%d   ",index[i]);

	if(no<a[0]||no>a[size-1])
	{
		printf("\nno is not found in an array");
	}
	else
	{
  		for(i=0;i<x;i++)
   		{
    		if(no<=a[index[i]])
			{
				if(no==a[0])
					{
					start=index[0];
					end=start+blksize;
					flag=1;
					break;
					}
				else
					{
					start=index[i-1];
					end=start+blksize;
					flag==1;
					break;
					}
			}
      		if(flag==0)
       		{
       		start=index[x-1];
       		end=size-1;
       		}
    	}
seqsearch(a,start,end,no);
	}
}

void seqsearch(int a[],int start,int no,int end)
{
int i,flag=0;
printf("start=%d\tend=%d",start,end);
	for( i=start;i<=end;i++)
	{
 		if(no==a[i])
 		{
 		flag=1;
 		break;
 		}
	}
	if(flag==1)
	printf("\n%d is found at %d position",no,i+1);
	else
	printf("\n%d is not found",no);
	}
