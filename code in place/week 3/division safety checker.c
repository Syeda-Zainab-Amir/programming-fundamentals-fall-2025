#include <stdio.h>
int main(void)
{
	float numerator, denominator, result;
	//take input from the user
	printf("Enter numerator:");
	scanf("%f",&numerator);
	
	printf("Enter denominator:");
	scanf("%f",&denominator);
	//Check if denominator is zero	
	if(denominator==0){
		printf("Error! Division not possible\n");
	}
	else{
		result=numerator/denominator;
		printf("Result is : %.2f\n",result);
	}
	 return 0;
}
