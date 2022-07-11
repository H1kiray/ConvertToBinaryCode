#include <stdio.h>
int Dop_kod(int number) {
    int mas_kod[8] = { 0 }, ostatok;
    number *= -1;
    for (int i = 7; i >= 0; i--) {
        if (i == 0) {
            mas_kod[i] = 1;
            continue;
        }
        ostatok = number % 2;
        mas_kod[i] = ostatok;
        number /= 2;
    }

    for (int i = 0; i < 8; i++) {
        if (i == 0)
            continue;
        else if (i > 0 && mas_kod[i] == 0)
            mas_kod[i] = 1;
        else if (i > 0 && mas_kod[i] == 1)
            mas_kod[i] = 0;
    }
    printf("\nДоп. Код:     ");
    for (int i = 7; i > 0; i--) {
        if (mas_kod[i] == 1)
            mas_kod[i] = 0;
        else if (mas_kod[i] == 0) {
            mas_kod[i] = 1;
            break;
        }
    }
    for (int i = 0; i < 8; i++)
        printf("%2d", mas_kod[i]);
    return number;
}
