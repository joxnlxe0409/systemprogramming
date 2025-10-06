#include <stdio.h>

double bmi_calculate(double h, double w){
	double BMI;
	BMI = w / (h * h);
	
	return BMI;
}

int main(void){
	double height, weight, bmi;
	printf("BMI Calculation\n");
	printf("Enter your height and weight: \n");
	scanf("%lf %lf", &height, &weight);
	bmi = bmi_calculate(height, weight);
	printf("Your BMI: %lf\n", bmi);
	
	return 0;
}


