#include <stdio.h>
int main(void)
{
	float watts;
	printf("Enter electrical power in watts:");
	scanf("%f",&watts);
	//Convert watts to kilowatts and display results
	printf("The power in kilowatts is %.2f",watts/1000);
	
	return 0;
	//End of programm
}
