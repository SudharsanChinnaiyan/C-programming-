# include<stdio.h>
int main()
{
	int x,
	 r;
	printf("enter the number to be reversed");
	scanf("%d",&x);
	for(;x!=0;x=x/10)
	{
		r=x%10;
		printf("%d",r);
	}
	
}
