# include<stdio.h>
int main()
{
	int stat;
	printf("hello world");
	printf("press 1 to continue 0 o exit ");
	scanf("%d",&stat);
	if(stat==1)
	main(); // recursive statement(a statement call itself)
}
