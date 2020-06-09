# include<stdio.h>
int main()
{
	int a=50,*b;
	float c=45.22,*e;
	b=&a;
	e=&c;
	printf("the value of a is %d",*b);
	printf("the value of c is %f",*e);
}
