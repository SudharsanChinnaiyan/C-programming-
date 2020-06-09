# include<stdio.h>
# include<string.h>
int main()
{
	char ch[25],cm[50];
	printf("enter the character 1 ");
	gets(ch);
	printf("enter the character 2 ");
	gets(cm);
	strcat(ch,cm);
	puts(ch);
	
}

