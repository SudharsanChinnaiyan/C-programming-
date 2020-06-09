# include<stdio.h>
# include<stdlib.h>
int main()
{
	char ch[20];
	int roll;
	float salary;
	FILE *fpnt;
	fpnt=fopen("C:\\Users\\Admin\\Documents\\c learn\\data.txt","r");
	if(fpnt==NULL)
	{
		printf("unable to open the file");
		exit(0);
	}
fscanf(fpnt,"%s %d %f",&ch,&roll,&salary);
printf("%s %d %f",ch,roll,salary);
fclose(fpnt);

}

