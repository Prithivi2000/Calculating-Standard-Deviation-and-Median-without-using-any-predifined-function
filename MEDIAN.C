#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int arr[100],i,n,index_sum;
	float average,index;
	clrscr();
	printf("\n Enter number of elements of array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter %d th element:",i+1);
		scanf("%d",&arr[i]);
	}
	if(n%2!=0)
	{
		index=(float)n/2;
		index_sum=index+0.5;
		index_sum=index_sum-1;
		printf("\n Median: %d",arr[index_sum]);
	}
	else if(n%2==0)
	{
		index_sum=n/2;
		index_sum=index_sum-1;
		average=arr[index_sum]+arr[index_sum+1];
		average=average/2;
		printf("\n Median: %.4f",average);
	}
	getch();
}