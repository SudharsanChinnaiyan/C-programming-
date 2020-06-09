# include<stdio.h>
int main()
{
	float  si,pi,rate;
	int time;
	float simpleinterest(float,int,float);//function definition
	printf("enter the pi,time,rate to calc simple interest");
	scanf("%f%d%f",&pi,&time,&rate);
	si=simpleinterest(pi,time,rate);// assigning a variable function call
	printf("the simple interest value is %f",si);
	
}

float simpleinterest(float pi,int time,float rate)// function definition
{
	float si;
	si=(pi*time*rate)/100;
	return si;
}
