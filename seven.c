#include <stdio.h>
int main()
{
	int basic,pa,hra;
	float netsalary;
	int nof;
	printf("Enter the nof");
	scanf("%d",&nof);
	printf("Enter the basic,pa,hra");
	scanf("%d%d%d",&basic,&pa,&hra);
	switch (nof)
	{
		case 1:
			netsalary=1.5*(basic+hra+pa);
			printf("the salary is \t%f",netsalary);
			break;
			case 2:
			    netsalary=1.75*(basic+hra+pa);
				printf("the salary is \t%f",netsalary);
				break;
				case 3:
					netsalary=2.0*(basic+hra+pa);
					printf("the salary is \t%f",netsalary);
					break;
					default:
						printf("No salary");
			}
}
