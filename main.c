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
    printf("Введите расстояние до станции: ");
    scanf("%d", &length);
    if (length > 500) {
        printf("Луноход не доедет\n");
        return;
    }
    printf("Доедет\n");
}

void checkChar() {
    // Задача 3
    char c;
    printf("Ведите букву в диапазаоне от A-Z: ");
    scanf(" %c", &c);
    if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z') {
        printf("Символ входит в диапазон\n");
        return;
    } else {
        printf("Сомвол не входит в диапазон\n");
        return;
    }
}

void checkDate() {
    // Задача 4
    // могу сделать другой формат ввода без / но так не получается проверять 02 и 2
    // если необходимо могу переделать
    // все работает от даты 2025/02/10
    printf("Введите дату в формате год/Месяц/День, пример 2025/12/02: ");
    int year, month, day;
    scanf("%d/%d/%d", &year, &month, &day);
    const int baseYear = 2025;
    if (year > baseYear) {
        printf("Миссия будет позже\n");
        return;
    } else {
        const int baseMonth = 02;
        if (month > baseMonth && year == baseYear) {
            printf("Миссия будет позже\n");
            return;
        } else {
            const int baseDay = 10;
            if (day > baseDay && month == baseMonth && year == baseYear) {
                printf("Миссия будет позже\n");
                return;
            } else {
                printf("Миссия уже прошла\n");
                return;
            }
        }
    }
}

void stableOrbit() {
    // Задача 5
    double postSpeedOrbit, preSpeedOrbit;
;
    printf("Введите расчетную скорость орбиты: ");
    scanf("%lf", &preSpeedOrbit);
    printf("Введите реальную скорость орбиты: ");
    scanf(" %lf", &postSpeedOrbit);
    if (postSpeedOrbit <= preSpeedOrbit + 0.1 && postSpeedOrbit >= preSpeedOrbit -0.1) {
        printf("Орбита стабильна!\n");
        return;
    }
    printf("Орбита не стабильна(\n");
}

int main() {
    int number;
    printf("Введите номер задачи: ");
    scanf("%d", &number);
    switch (number) {
        case 1: checkMass(); break;
        case 2: checkLength(); break;
        case 3: checkChar(); break;
        case 4: checkDate(); break;
        case 5: stableOrbit(); break;
        default: printf("Неверное число, такой задачи еще нету :/\n"); break;
    }
    return 0;
}
