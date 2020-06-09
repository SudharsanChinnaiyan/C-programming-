# include<stdio.h>
# include<conio.h>
int main()
{
	int *ar,b,c;
//	printf("enter the number of elements");
//	scanf("%d",&b);
	ar=(int*)malloc(sizeof(int)*3);
	for(c=0;c<3;c++)
	{
		printf("enter the array elements");
		scanf("%d",&ar[c]);
	}
	for(c=0;c<b;c++)
	{
	//	scanf("%d",&ar[c]);
		printf("%d",ar[c]);
		}	
		printf("--------------------------/n");
	
	ar=(int *)realloc(ar,sizeof(int) *5);
	for(c=3;c<5;c++)
	{
		printf("/n enter the array elements");
		scanf("%d ",& ar[c]);
			}
	for(c=0;c<5;c++)
	{
	//	scanf("%d",&ar[c]);
		printf("%d",*(ar+c));
	}
}

