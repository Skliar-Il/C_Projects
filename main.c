#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>


void checkMass() {
    // Задача 1
    int mass;
    printf("Введите свой вес  ");
    scanf("%d", &mass);
    if (mass < 60 || mass > 70) {
        printf("Ты не красава\n");
        return;
    }
    printf("Ты Красава\n");
}

void checkLength() {
    //Задача 2
    int length;
    printf("Введите расстояние до станции");
    scanf("%d", &length);
    if (length > 500) {
        printf("Луноход не доедет");
        return;
    }
    printf("Доедет");
}


int main() {
    int number;
    printf("Введите номер задачи: ");
    scanf("%d\n", &number);
    switch (number) {
        case 1: checkMass(); break;
        case 2: checkLength(2); break;
    }
    return 0;
}
