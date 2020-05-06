#include<stdio.h>
#include <math.h>
#define ESP 0.001
double get_root(double (*f)(double), double a, double b);
double func(double x)
{
	return (x) * (x) * (x)+(x) * (x)+(x)+7;
}
void main()
{
	double x0, x1;
	double r;
	printf("a�� ���� �Է��Ͻÿ�");
	scanf_s("%lf", &x0);
	printf("b�� ���� �Է��Ͻÿ�");
	scanf_s("%lf", &x1);
	r = get_root(func, x0, x1);
	printf("���� %f\n\n", r);
	printf("�й� = 20174257\n");
	printf("�̸� = ������\n");
	return 0;
}
double get_root(double (*f)(double), double x0, double x1)
{
	float x2;
	int i = 1;
	double f1, f2, f0;
	do
	{
		x2 = (x0 + x1) / 2;
		f0 = f(x0);
		f1 = f(x1);
		f2 = f(x2);
		if (f0 * f2 < 0)
			x1 = x2;
		else
			x0 = x2;
		i++;
	} while (fabs(f2) > ESP);

	return x2;
}
