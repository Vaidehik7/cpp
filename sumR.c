#include<stdio.h>

int main()
{
	int i,j,arr[100][100],r,c,k,sum=0;
	
	printf("Enter the no. of row : ");
	scanf("%d",&r);
	
	printf("\nEnter the no. of columns : ");
	scanf("%d",&c);
	
	printf("\nEnter matrix elements : ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	
	printf("\nEntered matrix is : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n ");
	}
	
	for(k=1;k<=r;k++)
	{
		for(i=0;i<r;i++)
	    {
		    for(j=0;j<c;j++)
		    {
		        sum+=arr[i][j];
		    }
		    printf("\n sum of %d row is %d",k,sum);
		    sum=0;
	    }
	   
	}
	
	return 0;
	
}
