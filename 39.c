# include<stdio.h>
int main()
{
	void somedata(int *,float *);// function declaration
	int a=100;
	float b=220.25;
	somedata(&a,&b);// calling function
	printf(" \n the values are a and b");
}

void somedata(int *a,float *b)// function denoting the call by reference 
{
	//int a,b;
	*a=*a+50;
	*b=*b+60.00;
	printf("the address is %u  and the value is %d",a,*a);
	printf("\n the address is %u  and the value is %f",b,*b);
}

