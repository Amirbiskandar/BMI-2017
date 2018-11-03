//M9_Week10_pg167_4c_Amir

#include<stdio.h>
float BMI(float,float);

main()
{
	float mass,height,M;
	printf("Enter mass   (kg)>>");
	scanf("%f", &mass);
	printf("Enter height  (m)>>");
	scanf("%f", &height);
	M = BMI(mass,height);
	printf("Your BMI is %.2f", M);
}

float BMI(float m, float h)
{
	float x;
	x = m/(h*h);
	return x;
}
