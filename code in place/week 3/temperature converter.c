#include <stdio.h>
int main(void)
{
	// take celsius as input and fahrenheit as output 
	float celcius,fahrenheit ; 
	printf("Enter temperature in celcius:");
	scanf("%f",&celcius);
	
	fahrenheit=celcius*9/5+32;
	printf("result in fahrenheit : %.2f",fahrenheit);
	
	/*observations:
	1.When celcius = 0 , fahrenheit=32
	2.When celcius = 100 , fahrenheit=212
	3.When celcius = -4 , fahrenheit=24.8
	*/
	return 0;
	
	
}

