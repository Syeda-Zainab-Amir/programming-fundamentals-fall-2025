#include <stdio.h>
int main(void)
{
	float weight;
	//Ask the user for patients weight 
	printf("Enter patient's weight:");
	scanf("%f",&weight);
	printf("The dosage(mg) for patient is %.2f",weight * 0.8);
	
	return 0;
	//End of programm
}
