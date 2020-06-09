# include <stdio.h>
int main()
{
	int ar[10],sum;
	int count=0;
	while(count<10)
	{
		printf("enter the number");
		scanf("%d",&ar[count]);
		sum+=ar[count];
		count++;
	}
	printf("the sum is %d",sum);
	
}

