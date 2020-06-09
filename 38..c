# include<stdio.h>
int main()
{
	int a=100,b=20;
	void somedsat(int,int);// function declaration
	somedsat(a,b);// function passing the formal arguments or call by value
}

void somedsat(int a,int b) // function definition
{
	printf("the value of a is %d", a);
	printf("the value of b is %d", b);
}
// if a function is defined before main statement then there is no need of 
// function declaration.
