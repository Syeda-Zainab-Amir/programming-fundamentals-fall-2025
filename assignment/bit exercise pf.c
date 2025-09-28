#include <stdio.h>
int main(void)
{
	int num;
	printf("Enter 8 bit number (0-255)\n");
	scanf("%d",&num);
	//checking if 4th bit is on or off 
	if(num&(1<<3)){
		printf("4th bit was on . Now turning it off\n");
		num=num&~(1<<3);		
	}
	else{
		printf("4th bit was off ,no change\n");
	}
	
	//check if 7th bit is on 
	if(num&(1<<6)){
		printf("7th bit was on ,turning it off\n");
		num=num&~(1<<6);
	}
	else{
		printf("7th bit was off ,no change\n ");
	}
	printf("Final number after change is %d\n",num);
	return 0;
}
