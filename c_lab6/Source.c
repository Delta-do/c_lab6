#include <stdio.h>
#include <locale.h>
#include <math.h>

void t1() 
{
	int year;
	printf("������� ��� ");
	scanf_s("%d", &year);
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		printf("��� %d ����������", year);
	else
		printf("��� %d �� ����������", year);
}

void t2()
{
	double x;
	printf("x = ");
	scanf_s("%lf", &x);
	/*
	if (x > 3)
		printf("%f", -3. * x + 9);
	else
		printf("%f", pow(x, 3) / (pow(x, 2) + 8.));
		*/
	printf("F(%.3f) = %.3f", x, x > 3 ? ( - 3. * x + 9) : (double) pow(x, 3) / (pow(x, 2) + 8));
}

void t3()
{
	char* name1 = gets();
	char name2[10];
	int d1, d2, m1, m2, g1, g2;
	puts("������� ��� � ���� �������� 1 ��������");
	scanf_s("%d %d %d", &d1, &m1, &g1);
	//puts("������� ��� � ���� �������� 2 ��������");
	//scanf_s("%[] %d %d %d", &name2, &d2, &m2, &g2);

	printf("%s %d %d %d", name1, d1, m1, g1);
	//printf("%s %d %d %d", name2, d2, m2, g2);
}

void main()
{
	setlocale(LC_ALL, "RUS");

	//1 �������
	//t1();

	//2 ������� (13 �������)
	//t2(); //���� x = 2, �� f(x) = 0,667
		  //���� x = 4, �� f(x) = -3

	//3 ������� (10 �������)
	t3();
}