# include<stdio.h>
#include<stdlib.h>
int main()
{
	struct stc
	{
		char ch[20];
		int roll;
		float avg;
	}stud;
	
	FILE *fpnt;
	fpnt=fopen("C:\\Users\\Admin\\Documents\\c learn\\data.bin","wb");
	if(fpnt==NULL)
	{
		printf("unable to open the document ");
		exit(0);
		}
	strcpy(stud.ch,"sudhar");
	stud.roll=100;
	stud.avg=45.98;
	fwrite(&stud,sizeof(struct stc),1,fpnt);
	fclose(fpnt);
}
