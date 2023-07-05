#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int t1, t2, t3;
    float total_time;

    SetConsoleOutputCP(1251);

    // Запитати час для першого гостя (t1) від користувача
    printf("Enter the time for the first guest (t1): ");
    scanf("%d", &t1);

    // Запитати час для другого гостя (t2) від користувача
    printf("Enter the time for the second guest (t2): ");
    scanf("%d", &t2);

    // Запитати час для третього гостя (t3) від користувача
    printf("Enter the time for the third guest (t3): ");
    scanf("%d", &t3);

    // Обчислити загальний час, який займе гостям з'їсти пиріг
    total_time = 1.0 / t1 + 1.0 / t2 + 1.0 / t3;

    // Вивести час, який займе гостям з'їсти пиріг, округлений до 2 знаків після коми
    printf("The time it takes for the guests to eat the cake: %.2f hours\n", 1.0 / total_time);

    return 0;
}
