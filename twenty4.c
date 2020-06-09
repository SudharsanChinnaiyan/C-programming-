# include<stdio.h>
int main()
{
	int a,b,c;
	int arr[10];
	for(a=0;a<10;a++)
	{
		printf("enter the arrar elements");
		scanf("%d",&arr[a]);
		}
	for(a=0;a<10;a++)
	printf("%d",arr[a]);
	
	for(a=0;a<10;a++)
	{
			for(b=0;b<(10-1);b++)
			{
				
			if(arr[b]>arr[b+1])
			
			
			{
				c=arr[b];
				arr[b]=arr[b+1];
				arr[b+1]=c;
			}
		}
	}
	for(a=0;a<10;a++)
	printf("%d",arr[a]);
}
