#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int arr[100],i,N;
	float sub,var=0,std=0,mean=0,var_sub=0;
	clrscr();
	printf("The size of array: ");
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		printf("Enter %d th element:", i+1);
		scanf("%d",&arr[i]);
	}
	printf("\n The Array:\n");
	for(i=0;i<N;i++)
	{
		printf("%d ",arr[i]);
	}
	for(i=0;i<N;i++)
	{
		mean =mean+arr[i];
		printf("\n Mean per stage:%f",(float)mean);
	}
	mean=(float)mean/(float)N;
	printf("\n Mean: %f",mean);
	for(i=0;i<N;i++)
	{
		sub=arr[i]-mean;
		sub=sub*sub;
		var_sub=var_sub+sub;
	}
	var=var_sub/N;
	printf("Variance: %f",var);
	std=sqrt(var);
	printf("Standard Deviation: %f",(float)std);
	getch();

}