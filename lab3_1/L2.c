#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "RU_ru.UTF-8");
	int dym = 0;
	float D = 2.54f;
	float P = 2.32166f;
	float S = 2.7076f;
	float result1 = 0.0f;
	float result2 = 0.0f;
	float result3 = 0.0f;
	printf("Введите значения для расчёта: ");
	scanf_s("%d", &dym);
	result1 = D * dym;
	result2 = P * dym;
	result3 = S * dym;
	printf("%d дюймов - это %.1f см\n%d испанского дюйма - это %.1f см\n%d старолитовского - это %.1f см", dym, result1, dym, result2, dym, result3);
	return 0;
}