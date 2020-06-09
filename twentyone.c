# include<stdio.h>
int main()
{
	float avg[10],sum;
	int b,a=1;
	while(a<11)
	{
		printf("enter the ten numbers %d",a);
		scanf("%f",&avg[a]);
		a++;
	}
	a=1;
	while(a<11)
	{
		sum+=avg[a];
	    a++;
}
printf("the average of 10 number is %f", avg[a]);
}
