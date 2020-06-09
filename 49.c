# include<stdio.h>
struct salary
{
	int emp_id;
	float basic,hra,pf;
	};
	
int main()
{
	struct salary sal;
	float getsalary(struct salary *);
	float sala;
	printf("enter employee details");
	scanf("%d%f%f%f",&sal.emp_id,&sal.basic,&sal.hra,&sal.pf );
	sala=getsalary(&sal);
	printf("the total salary is %f", sala);
			}
			
 float getsalary(struct salary *pal)
 {
 float sala;
 sala=pal->basic+pal->hra+pal->pf;
 return sala;	
 }
