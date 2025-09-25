#include <stdio.h>
int main(void)
{
	int days;
	printf("Enter the number of day of the week :");
	scanf("%d",&days);
	switch(days){
		case 1:printf("monday\n");
		break;
		case 2:printf("Tuesday\n");
		break;
		case 3:printf("Wednesday\n");
		break;
		case 4:printf("Thursday\n");
		break;
		case 5:printf("Friday\n");
		break;
		case 6:printf("Saturday\n");
		break;
		case 7:printf("Sunday\n");
		break;
		default: printf("invalid number of day \n");
	}
	return 0;
}

