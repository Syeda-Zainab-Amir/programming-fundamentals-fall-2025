#include <stdio.h>
int main(void)
{
	int temp;
	//Take input from the user
	printf("Enter temperature:");
	scanf("%d",&temp);
	//Check if temperature is above thirty
	if(temp>30){
		printf("Weather is hot !");
	}
	else{
		printf("Weather is not hot");
	}
	return 0;
	//End of program 
}
