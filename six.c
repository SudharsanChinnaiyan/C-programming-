#include <stdio.h>
#include<ctype.h>
int main()
{
	char city;
	printf("Enter the name of the city");
	city=getchar();
	switch(toupper(city))
	{
		case 'A':
		printf("\n Amsterdam");
		break;
		case 'B':
			printf("\n Bolivia");
			break;
			case 'C':
				printf("\n Calgary");
				break;
				case 'D':
					printf("\n Dallas");
					break;
					default:
						printf("ohh nooo");
					
				}	
}
