# include <stdio.h>

long int facte(int n)
{
//	int n;
	long int f;
	if(n==0)
	return 1;
	f=n*facte
	(n-1);
	return f;
	
}


int main()
{
	int n;
	long int d ; 
	printf("Enter the number");
	scanf("%d",&n);
	d=facte(n);
	printf("the factorial is %ld",d);
	
}
