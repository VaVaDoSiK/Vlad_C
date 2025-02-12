#include <stdio.h>

int main() {
    double calculated_speed, actual_speed;
    const double tolerance = 0.1;
    
    printf("Введите расчетную скорость (м/с): ");
    scanf("%lf", &calculated_speed);
    printf("Введите фактическую скорость (м/с): ");
    scanf("%lf", &actual_speed);

    double difference = calculated_speed - actual_speed;

    if (difference < 0) {
        difference = -difference;
    }

    if (difference <= tolerance) {
        printf("Орбита стабильна.\n");
    } else {
        printf("Орбита нестабильна.\n");
    }

    return 0;
}