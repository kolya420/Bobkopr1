#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int t1, t2, t3;
    float total_time;

    SetConsoleOutputCP(1251);

    // Request time for the first guest (t1) from the user
    printf("Enter the time for the first guest (t1): ");
    scanf("%d", &t1);

    // Request time for the second guest (t2) from the user
    printf("Enter the time for the second guest (t2): ");
    scanf("%d", &t2);

    // Request time for the third guest (t3) from the user
    printf("Enter the time for the third guest (t3): ");
    scanf("%d", &t3);

    // Calculate the total time it will take guests to eat the pie
    total_time = 1.0 / t1 + 1.0 / t2 + 1.0 / t3;

    // Print the time it will take the guests to eat the pie, rounded to 2 decimal places
    printf("The time it takes for the guests to eat the cake: %.2f hours\n", 1.0 / total_time);

    return 0;
}
