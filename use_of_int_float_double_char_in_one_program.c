#include<stdio.h>
int main()
{
	int a;
	a = 10;
	
	float b,c,d;
	b = 20;
	c = 20;
	d = b + c;
	
	double e,f,g;
	e = 100;
	f = 50;
	g = e - f;
	
	const char h[] = "Avi Goyal";
	
	printf("Name of student = %s\nValue are a = %d\nAddition of two number b + c = %f\nSubstraction of two number = %lf", h,a,d,g);
	return 0;
}
