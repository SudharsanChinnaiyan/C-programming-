# include<stdio.h>
int main()
{
	int a=500,*b,**c;
	b=&a;
	c=&b;
	printf("the pointer value is %u \n",b);
	printf("the pointer value is %d \n",*b);
	printf("the pointer value is %u \n",c);
	printf("the pointer value is %d \n",*c);
	printf("the pointer value is %d \n",**c);
}

