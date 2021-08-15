#include<stdio.h>

int main () {
	double W ;
	double H ;
	
	printf("Enter your weight(kg.): ");
	scanf("%lf", &W);
	printf("Enter your hight(cm.): ");
	scanf("%lf", &H);
	
	double bmi = ( W/(H*H))*10000;
	if(bmi<18.5 && bmi>=0)
	{
		printf("%lf under the threshold",bmi);
	}
	else if (bmi>=18.5 && bmi<22.9)
	{
		printf("%lf slim",bmi);
	}
	else if (bmi>=22.9 && bmi<24.9)
	{
		printf("%lf overweight",bmi);
	}
	else if (bmi>=24.9 && bmi<=29.9)
	{
		printf("%lf obesity",bmi);
	}
	else if(bmi>=30.0)
	{
		printf("%lf Dangerous obesity",bmi);
	}
	else{
		printf("EROR");
	}

return 0;
}

