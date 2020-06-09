# include<stdio.h>
int main()
{
	int a,b,n;
	printf("enter the number of rows to be printed");
	scanf("%d",&n);
	for(a=1;a<=n;a++)
	{
		for(b=1;b<=a;++b)
		{
		printf(" %d",a);
		}
	printf("\n");
}
}

