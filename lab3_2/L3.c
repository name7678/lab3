#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "RU_ru.UTF-8");
	int a = 0;
	int b = 0;
	printf("Введите два числа\n");
	printf("Первое число: ");
	scanf_s("%d", &a);
	printf("Второе число: ");
	scanf_s("%d", &b);
	printf("Введены числа: %d, %d\n", a, b);
	printf("________________________________\n");
	printf("| a * b | a + b | a - b       |\n");
	printf("_________________________________\n");
	printf("| %-d * %-d | %-d + %-d | %-d - %-d    |\n", a ,b, a, b, a, b);
	printf("_________________________________\n");
	printf("| %7d | %7d | %7d |", a * b, a + b, a - b);
	return 0;
}