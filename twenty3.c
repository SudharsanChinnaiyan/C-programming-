# include<stdio.h>
int main()
{
	float sum,avg;
	int n,count,biggest;
	printf("enter the number of elements");
	
	scanf("%d",&n);
	int val[n];
	for(count=0 ;count<n;count++)
	{
		printf("the number  %d is = ",count+1);
		scanf("%d",&val[count]);
		sum+=val[count];
		}
	
	biggest=val[0];
	for(count=1;count<n;count++)
	{
		if(val[count]>biggest)
		{
			biggest=val[count];
	}
	}
	printf("the biggest number is \t%d",biggest);			
	
 	printf("\n the sum of n number are %f \n average is %f ",sum,sum/n);
	}
