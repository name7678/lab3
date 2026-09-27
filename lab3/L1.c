#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "RU_ru.UTF-8");
	int num = 0;
	int num1 = 0;
	printf("Введите число: ");
	scanf_s("%d", &num);
	printf("Введено число: %d\n", num);
	printf("Введите ещё число: ");
	scanf_s("%d", &num1);
	printf("Введено число: %d\n", num1);
	printf("Сумма: %d, разность: %d, произведение: %d, частное: %f, остаток от деления: %d", num + num1, num - num1, num * num1, 1.0 * num / num1, num % num1);
	return 0;
}