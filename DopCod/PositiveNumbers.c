#include <stdio.h>
int PositiveNumber(int number) {
    int mas_kod[8] = { 0 }, ostatok;
    for (int i = 7; i >= 0; i--) {
        ostatok = number % 2;
        mas_kod[i] = ostatok;
        number /= 2;
    }
    printf("������ ���:   ");
    for (int i = 0; i < 8; i++)
        printf("%2d", mas_kod[i]);
    printf("\n���. ���:     ");
    for (int i = 0; i < 8; i++)
        printf("%2d", mas_kod[i]);
    printf("\n�������� ���: ");
    for (int i = 0; i < 8; i++)
        printf("%2d", mas_kod[i]);
    return number;
}
