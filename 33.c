# include<stdio.h>
int main()
{
	int a,b,c,z;
	int sumz(int,int,int);// function declaration.
	printf("enter the 3 numbers a,b and c ");
	scanf("%d%d%d",&a,&b,&c);
	z=sumz(a,b,c);
	printf("sum = %d",z
	);
	}
	
	int sumz(int a1, int b1,int c1)
	{   int z;
		z=a1+b1+c1;
		return z;
	}

