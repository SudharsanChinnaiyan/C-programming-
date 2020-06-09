#include <stdio.h>
int main()
{
	int meterreading;
	float amount;
	printf("enter the meter readings ",meterreading);
	scanf("\t%d",&meterreading);
	if(meterreading>800)
	amount=10.0*meterreading;
	else if(meterreading>600)
	amount=8.0*meterreading;
	else if(meterreading>400)
	amount=6.0*meterreading;
	else if(meterreading>300)
	amount=5.0*meterreading;
	else
	amount=3.0*meterreading;
	printf("the final bill amount is %.2f",amount);
	getche();
	
}

