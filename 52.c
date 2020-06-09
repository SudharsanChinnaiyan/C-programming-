# include<stdio.h>
# include<stdlib.h>
int main()
{
	char ch[20];
	int roll;
	float salary;
	FILE *fpnt;
	fpnt=fopen("C:\\Users\\Admin\\Documents\\c learn\\data.txt","w");
	if(fpnt==NULL)
	{
		printf("unable to open the file");
		exit(0);
	}
	printf("enter the datas");
	gets(ch);
	printf("enter the roll and salary");
	scanf("%d %f",&roll,&salary);
	fprintf(fpnt,"%s %d %f",ch,roll,salary);
	fclose(fpnt);
	
}

