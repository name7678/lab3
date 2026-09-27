#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "RU_ru.UTF-8");
	float s = 60.0f;
	float pr = 91.1f;
	float q = 9.0f;
	float f = s / 100 * q;
	float c = pr * f;
	printf("Стоимость поездки: %.2f ", c);
	return 0;
}