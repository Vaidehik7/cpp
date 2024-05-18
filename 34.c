#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,max_div,flag=1;
	printf("Enter a two nos. : ");
	scanf("%d %d",&a,&b);
	
	max_div=(a>b)?a:b;
	
	while(flag)
	{
		if(max_div%a==0&&max_div%b==0)
		{
			printf("The Lcm of %d & %d is %d",a,b,max_div);
			break;
		}
	}
	
}
