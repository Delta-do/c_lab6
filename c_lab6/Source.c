#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

void t1() 
{
	int year;
	printf("¬ведите год ");
	scanf_s("%d", &year);
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		printf("√од %d високосный", year);
	else
		printf("√од %d не високосный", year);
}

void t2()
{
	double x;
	printf("x = ");
	scanf_s("%lf", &x);
	printf("F(%.3f) = %.3f", x, x > 3 ? ( - 3. * x + 9) : (double) pow(x, 3) / (pow(x, 2) + 8));
}

void t3()
{
	char name1[20];
	char name2[20];
	int d1, d2, m1, m2, g1, g2;
	
	puts("¬ведите им€ и дату рождени€ 1 человека через пробел");
	scanf("%s %d %d %d", name1, &d1, &m1, &g1);

	puts("¬ведите им€ и дату рождени€ 2 человека через пробел");
	scanf("%s %d %d %d", name2, &d2, &m2, &g2);
	
	printf("%s %d %d %d\n", name1, d1, m1, g1);
	printf("%s %d %d %d\n", name2, d2, m2, g2);

	if (g1 > g2)
		printf("%s", name2);
	else if (g1 < g2)
			printf("%s", name1);
		else if (m1 > m2)
				printf("%s", name2);
			else if (m1 < m2)
					printf("%s", name1);
				else if (d1 > d2)
						printf("%s", name2);
					else
						printf("%s", name1);
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