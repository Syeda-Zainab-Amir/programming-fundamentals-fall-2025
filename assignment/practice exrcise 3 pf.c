#include <stdio.h>
int main(void)
{
	float originalprice;

	printf("Enter your shopping price:");
	scanf("%f",&originalprice);
	if(originalprice>=1000 && originalprice<=1999){
		printf("You  get a 50 percent discount\n");
		printf("The price after discount is Rs  %2.f\n",originalprice*(1-50.0/100));
		printf("The amount saved is Rs %2.f\n ",originalprice*(50.0/100));
		printf("Happy shopping");
	}
	else if(originalprice>=2000 && originalprice<=4000){
		printf("You get a 20 percent discount\n");
		printf("The price after discount is Rs %2.f\n",originalprice*(1-20.0/100));
		printf("The amount saved is Rs %2.f\n",originalprice*(20.0/100));
		printf("Happy shopping");
	}	
	else if(originalprice>=4000 && originalprice<=6000){
		printf("You get a 30 percent discount");
		printf("The price after discount is Rs %2.f\n",originalprice*(1-30.0/100));
		printf("The amount saved is Rs %2.f\n",originalprice*(30.0/100));
		printf("Happy shopping");
	}
	else if(originalprice>6000){
		printf("You get a 50 percent discount\n");
		printf("The price after discount is Rs %2.f\n",originalprice*(1-50.0/100));
		printf("The amount saved is Rs %2.f\n",originalprice*(50.0/100));
		printf("Happy shopping");
			}
			else{
				printf("No discount");
				printf("Happy shopping");
			}
			return 0;

}
