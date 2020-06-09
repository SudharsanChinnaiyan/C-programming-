/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
# include<stdio.h>
int main()
{
	float sum;
	int n;
  printf("enter the number of elements");
  scanf("%d",&n);
  	printf("the number of elements are  %d",n);
  //	int a=0;
	int val[n];
	while(n<7)
	{
		printf("the numbers is  %d = ",n );
		scanf( "%d",&val[n]);\
		n++;
		
		
	}
	//a=0;
	while(n<7)
	{
		sum+=val[n];
		n++;
		}
	printf("the sum of n number is = %.2f and average is %0.2f ", sum,(sum/n) );
	
}
