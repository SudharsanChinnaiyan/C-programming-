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
	fpnt=fopen("C:\\Users\\Admin\\Documents\\c learn\\data.bin","rb");
	if(fpnt==NULL)
	{
		printf("unable to open the document ");
		exit(0);
		}
	fread(&stud,sizeof(struct stc),1,fpnt);	
	printf("name = %s\nroll = %d\navg =%f",stud.ch,stud.roll,stud.
	avg);
				
	fclose(fpnt);
}
