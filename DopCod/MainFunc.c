#include <locale.h>
#include <stdio.h>
#include "Header.h"

int main()
{
    setlocale(LC_CTYPE, "rus");
    int number;
    printf("Введите число для перевода в двоичный код(прямой,доп.,обратный): ");
    scanf_s("%d", &number);
    if (number >= 0)
        PositiveNumber(number);

    else if (number < 0) {
        NegativeNumber(number);
        Reverse(number);
        Dop_kod(number);
    }
    else
        printf("Не правильный ввод числа !");
    return 0;
}
