# include<stdio.h>
int main()
{
	int ar[3][3],a,b;
	printf("enter the array elements");
	for(a=0;a<3;a++)
	{
		for(b=0;b<3;b++){
			
		
		printf("ar[%d][%d]=",a,b);
		scanf("%d",&ar[a][b]);
	}}
	
	printf("\n the values is matrix form: \n\n\n ");
	for(a=0;a<3;a++)
	{
	 for(b=0;b<3;b++)
{
	 printf("%d\t",ar[a][b]);
    }
    		printf("\n");
    	}
	}
