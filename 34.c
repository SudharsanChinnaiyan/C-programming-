# include<stdio.h>
int main()
{
	int n;
	long fact;
	long factorial(int);//function definition
	printf("enter the number for finding factorial");
	scanf("%d",&n);
	fact=factorial(n);// assigning fact the function of factorial
	printf("the factorial of n  %d is = %ld",n,fact);
}

long factorial(int n)
{ 
long f=1;
while(n>=2)
{
 f=f*n;
 --n;
}
return f;
}
