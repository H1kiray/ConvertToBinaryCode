#include <stdio.h>
int Reverse(int number) {
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
    printf("\nОбратный код: ");
    for (int i = 0; i < 8; i++) {
        if (i == 0) {
            printf("%2d", mas_kod[i]);
            continue;
        }
        else if (i > 0 && mas_kod[i] == 0)
            mas_kod[i] = 1;
        else if (i > 0 && mas_kod[i] == 1)
            mas_kod[i] = 0;
        printf("%2d", mas_kod[i]);
    }
    return number;
}
