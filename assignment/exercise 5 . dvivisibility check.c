#include <stdio.h>
int main(void)
{
	int n;
	printf("Enter a number :");
	scanf("%d",&n);
	//find the last digit
	 
	int last_digit=n%10;
	int rest=n/10;
	int doublelast=last_digit*2;
	int result=rest-doublelast;
	
	if(result==7||result==-7||result==0){
		printf("Yes.This number is divisible by 7\n");
		return 0;
	}
	else{

	//repeat the process
	last_digit=result%10;
	rest=result/10;
	doublelast=last_digit*2;
	result=rest-doublelast;
}
	
	if(result==7||result==-7||result==0){
		printf("Yes.This number is divisible by 7\n");
	}
	else{
		printf("No! the number is not divisible by 7\n");
	}
	return 0;
}
