#include <stdio.h>

int main(){
    int distance;
    printf("Введите растояние до зарядочной станции: ");
    scanf("%d", &distance);
    if (distance <= 500) {
        printf("Вы сможете доехать до станции");
    }

    else {
        printf("Вы не сможете доехать до станции");
    }
    return 0;
}