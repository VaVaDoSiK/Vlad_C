#include <stdio.h>

int main(){
    printf("Впишите дату: ");
    int date;
    scanf("%d", &date);
    int day = 20250212;

    if (date > day){
        printf("Запуск ракеты будет в будущем");
    }

    else if (date == day){
        printf("Запуск ракеты будет в сегодня");
    }

    else {
        printf("Запуск ракеты уже был");
    }
    return 0;
}