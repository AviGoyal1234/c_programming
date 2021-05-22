#include<stdio.h>
int main()
{
	const char z[] = "Avi Goyal";
	
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
	
	printf("Name of student = %s\nValue are a = %d\nAddition of two number %f + %f = %f\nSubstraction of two number %lf - %lf = %lf", z,a,b,c,d,e,f,g);
	return 0;
}
