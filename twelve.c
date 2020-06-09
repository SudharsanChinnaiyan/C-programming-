# include<stdio.h>
int main()
{
	int a;
	long int fact=1;
	printf("enter the no for factorial");
	scanf("%d",&a);
	while(a>=2)
	{
		fact=fact*a;
		--a;
	}
	printf("factorial = %d",fact);
	
}
