# include<stdio.h>
# include<conio.h>
int main()
{
	int *ar,b,c;
	printf("enter the number of elements");
	scanf("%d",&b);
	ar=(int *)malloc(sizeof(int)*b);
	for(c=0;c<b;c++)
	{
		printf("ar[c]",c);
		scanf("%d",&ar[c]);
	}
	
	for(c=0;c<b;c++)
	{
		printf("the array elemnets are %d",*(
		ar+c));
	}
}
