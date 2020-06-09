# include<stdio.h>
int main()
{
int n;	
	struct rec
	{
	//	char a[10];
		int x;
		float y;
		float z;
	}std[n];
	
	int k;
	printf("the datas of the above ");
	printf("\n enter the number of datas :");
	scanf("%d",&n);
	
	for(k=0;k<n;++k)
	{
	printf("The char \tRoll no  \tSalary  \tBenefits \t",std[k].x,std[k].y,std[k].z);
	scanf("%d%f%f" ,&std[k].x,&std[k].y,&std[k].z);
	}
	
		
	for(k=0;k<n;++k)
	{
		printf("\nChar: Roll :%d Salary :%f  Benefits:%f",std[k].x,std[k].y,std[k].z);
	//	printf("\roll is %d :",std[k].x);
//		printf("\n the benefits is %f :",std[k].z);
		}
}
