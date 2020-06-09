# include<stdio.h>
int main()
{
	int num,r;
	void getreverse(int);
	printf("emter the number to be reversed");
	scanf("%d",&num);
	getreverse(num);
//	printf("the reversed num is %d",r);
}

void getreverse(int num)
{
int r;
while(num!=0)
{
	
	r=num%10;
	printf("%d",r);
	num=num/10;
}
}
