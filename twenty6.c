# include<stdio.h>
int main()
{
	int *a;
	int b=500;
	float *i;
	float j=45.65;
	char *c;
	char dj='t';
	a=&b;
	i=&j;
	c=&dj;
	printf(" the address of int is %u \n",a);
	printf(" the address of float is %u \n",i);
	printf(" the address of char is %u \n
	",c);
}
