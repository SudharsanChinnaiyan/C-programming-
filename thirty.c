# include<stdio.h>
int main()
{
	int ar[]={100,200,300,500};
	printf("the base address is %u",ar);
	printf("the base address is %u",ar+1);
	printf("the base address is %u",ar+2);
	printf("the value is %d",*ar);
	printf("the value is %d",*(ar+1));
	printf("the value is %d",*(ar+2));
}

