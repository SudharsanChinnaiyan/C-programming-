# include<stdio.h>
int main()
{
	int arr[10];
	int b=0;
	while(b<10)
	{
		printf("elements of the table %d",b+1);
		scanf("%d",&arr[b]);
		++b;
	}
	
	b=0;
	while(b<10)
	{
		printf("th table elements are %d = %d\n",b+1,arr[b]);
		++b;
	}
	
}
