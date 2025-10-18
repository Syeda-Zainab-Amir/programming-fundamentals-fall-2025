#include <stdio.h>
int main(void)
{
	int num ;
	//take input from the user 
	printf("Enter number:");
	scanf("%d",&num);
	//check if number is even or odd
	if(num%2==0){
		printf("%d is an even number!\n",num);
	}
	else{
		printf("%d is an odd number!\n",num);
		
	}
	return 0;
}
