#include <stdio.h>
#include <locale.h>
#include <math.h>

void t1() 
{
	int year;
	printf("Введите год ");
	scanf_s("%d", &year);
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		printf("Год %d високосный", year);
	else
		printf("Год %d не високосный", year);
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
	puts("Введите имя и дату рождения 1 человека");
	scanf_s("%d %d %d", &d1, &m1, &g1);
	//puts("Введите имя и дату рождения 2 человека");
	//scanf_s("%[] %d %d %d", &name2, &d2, &m2, &g2);

	printf("%s %d %d %d", name1, d1, m1, g1);
	//printf("%s %d %d %d", name2, d2, m2, g2);
}

void main()
{
	setlocale(LC_ALL, "RUS");

	//1 задание
	//t1();

	//2 задание (13 вариант)
	//t2(); //если x = 2, то f(x) = 0,667
		  //если x = 4, то f(x) = -3

	//3 задание (10 вариант)
	t3();
}