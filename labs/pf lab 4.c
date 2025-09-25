#include <stdio.h>
int main(void)
{
	int dept,subDept;
	printf("1.CS (computer science)\n");
	printf("2.EE(electrical engineering)\n");
	printf("Choose your department\n");
	scanf("%d",&dept);
	switch(dept){
		case 1:printf("You have selected computer science \n");
		printf("Choose sub dept:\n");
		printf("1.BSCS\n");
		printf("2.Cyber Security\n");
		printf("3.DS\n");
		scanf("%d",&subDept);
		switch(subDept){
			case 1:printf("Your sub department is Bachelor of computer science\n");
			break;
			case 2:printf("Your sub department is Cyber security\n");
			break;
			case 3:printf("Your sub department is Data science \n");
			break;
			default : printf("sub department not found\n");
			break;
		}		
		break;
		case 2:printf("You have selected electrical engineering\n");
			break;
			
			default :printf("invalid input\n");
			break;
		}
		return 0;
		
	}


