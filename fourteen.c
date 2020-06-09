# include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the starting and ending numbers of multiplication");
	scanf("%d%d",&a,&b);
	for(;a<=b;a++)
	{
		for(c=1;c<=10;c++)
		printf("\n%d * %d= %d",a,c, a*c);
	}
}
