# include<stdio.h>
int main()
{
	float sum;
	int n;
	printf("enter the number of elements %d",n);
	int a=0;
	int val[n];
	while(a<n)
	{
		printf("the numbers are %d = ",n );
		scanf("%d",&val[n]);\
		n++;
		a++;
		
	}
	a=0;
	while(a<n)
	{
		sum+=val[n];
		n++;
		}
	printf("the sum of n number is = %.2f and average is %0.2f ", sum,(sum/n) );
	
}
