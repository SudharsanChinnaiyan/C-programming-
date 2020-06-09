# include<stdio.h>
int main()
{
	int a=500,*b;
	b=&a;
	printf("enter the values %u", b);
	
	b++;
	printf("enter the values %u", b);
	
	
///////////////////////////////////////////////
int ar[]={100,200,300,400,500};
int z=&ar[4]-&ar[2];
printf("z=%d",z);
}
