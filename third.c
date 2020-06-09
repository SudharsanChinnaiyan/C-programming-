# include <stdio.h>
int main()
{
	int a,b,c;
	float g;
	float h=0.00;
	printf("enter the values of \na, \nb,and \nc");
	scanf("%d%d%d",&a,&b,&c);
	g=(a+b+c)/3.0;
	printf("the average is %.2f",g);
	if(g>90)
	{
	h=1000.00;
	printf("\nthe h value is %.2f",h);
}
	else
	{
	h=100.00;
	printf("\nthe h value is %.2f",h);
}
	getch();

}
