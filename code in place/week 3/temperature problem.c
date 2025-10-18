#include <stdio.h>
int main(void)
{
	float temp;
	float fahrenheit;
	//Take input 
		printf("Enter temperature in celsius:");
	scanf("%f",&temp);
	//Convert celsius to fahrenheit
	fahrenheit=(temp*9/5)+32;
	printf("%.2f in celsius = %.2f in fahrenheit\n" ,temp , fahrenheit );
	// Provide recommendations
	
	if (temp>=30){
		printf("it's hot ! Stay hydrated and wear light clothes\n");
	}
	else if(temp>=20&&temp<=29){
		printf("Nice weather!.Perfect for outdoor activities\n");
	}
	else if("temp>=10 && temp<=19"){
		printf("Cool weather.Wear a light jacket\n");
	}
	else if(temp>=0 && temp<=9){
		printf("Cold!. Wear warm clothes\n");
	}
	else {
		printf("Freezing! Stay indoorsand bundle up\n");
	}
	return 0;
}
