# include<stdio.h>
int main()
{


	int ar[]={100,200,300,400,500};
	int n;
	void arrayset(int *);// function declaration
	arrayset(ar); //calling function
	printf("the arrays are declared above");

    for(n=0;n<5;++n)
	{
	printf(" \n %d element is %d ",n,ar[n]);
	}
}

void arrayset(int *pnt) // function definition
{
	int n;
	for(n=0;n<5;n++)
	*(pnt+n)=*(pnt+n)*5;
}
