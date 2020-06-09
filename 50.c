# include<stdio.h>
# include<stdlib.h>
int main()
{
	FILE *fpnt;
	char mychar;
	fpnt=fopen("C:\\Users\\Admin\\Documents\\c learn\\data.txt","w");
	if(fpnt==NULL)
	{
		printf("Unable to open file ....");
		exit(0);
	}
	while((mychar=getchar())!=EOF)
	
	{
		fputc(mychar,fpnt);
	}
	fclose(fpnt);
}
