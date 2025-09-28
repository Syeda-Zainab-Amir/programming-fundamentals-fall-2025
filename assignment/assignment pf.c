#include <stdio.h>
int main(void)
{
		char character;
	printf("Enter your character:");
	scanf("%c",&character);
	
	if(character>='A'&& character<='Z'){
		printf("The character is a capital letter");
	}
	
	else if(character>='a'&& character<='z'){
		printf("The character is a small alphabet");
	}
	
	else if(character>='0'&& character <='9'){
		printf("The character is a digit");
	}
	else{
		printf("It is a special character");
	}
	return 0;
}
