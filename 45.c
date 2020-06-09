# include<stdio.h>
int main()
{
	struct book
	{
		char book[10];
		int year;
		int quantity;
		};
		struct book bk1,bk2,bk3;
		
		printf("the available books are");
		printf("\n enter the book name");
		printf("\nbook name \t  year : \t quantity : \t",bk1.book,bk1.year,bk1.quantity);
		scanf("%s%d%d",&bk1.book,&bk1.year,&bk1.quantity);
		
		printf("\nbook name :\t year : \t quantity : \t",bk2.book,bk2.year,bk2.quantity);
		scanf("%s%d%d",&bk2.book,&bk2.year,&bk2.quantity);
		
		printf("\nbook name :\t year : \t quantity : \t",bk3.book,bk3.year,bk3.quantity);
		scanf("%s%d%d",&bk3.book,&bk3.year,&bk3.quantity);
		
		printf("\nbook name is %s year is %d quantity %d",bk1.book,bk1.year,bk1.quantity);
		
		printf("\nbook name is %s year is %d quantity %d",bk2.book,bk2.year,bk2.quantity);
		
		printf("\nbook name is %s year is %d quantity %d",bk3.book,bk3.year,bk3.quantity);
		
		
}
