# include<stdio.h>
int main()
{
	struct key
	{
		char emp[10];
		int salary;
		int pf;
	};
	struct key empl;
	struct key *ptr;
//	int tot;
	ptr=&empl;
	strcpy(ptr->emp,"no1");
	ptr->salary=10000;
	ptr->pf=2500;
//	tot=ptr->salary+ptr->pf;
	puts(ptr->emp);
	printf("the basic sal is %d",ptr->salary);
	printf("the pf is %d", ptr->pf);
//	printf("the total sal is %d",tot);
}

