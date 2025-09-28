#include <stdio.h>
int main(void)
{
	float total_calories;
	float fat_grams;
	printf("Enter total calories\n:");
	scanf("%f",&total_calories);
	printf("Enter fat grams\n:");
	scanf("%f",&fat_grams);
	
	if(total_calories<0||fat_grams<0){
		printf("Calories and fat grams cannot be less than zero \n");
		return 0;
	}
	
	float calories_from_fat=fat_grams*9;
	if(calories_from_fat>total_calories){
		printf("calories from fat cannot exceed total calories\n");
		return 0;
	}
		float percentage_fat=(calories_from_fat/total_calories)*100;
	printf(" calories from fat are %.2f\n",calories_from_fat);
	printf("Percentage of calories from fat is : %.2f\n",percentage_fat);
	if(percentage_fat<30){
		printf("This food is low in fat\n");
		return 0;
	}
		else{
		printf("Check your diet \n");
	}
	return 0;
}
