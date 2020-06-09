# include<stdio.h>
int main()
{
	int a,b;
	float c;
	printf("enter the values of a and b");
	scanf("%d%d",&a,&b);
	c=(float)a/b;
	printf("the value of c is %10.2f",c);
	getch();
}
