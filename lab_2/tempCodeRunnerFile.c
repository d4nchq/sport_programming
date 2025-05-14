#include <stdio.h>

int main() {
    float distance1 = 120.0; //перша частина шляху у кілометрах.
    float time1 = 2.0; //час для першої частини шляху у годинах.

    float distance2 = 80.0; //друга частина шляху у кілометрах.
    float time2 = 1.0; //час для другої частини шляху у годинах.

    float totalDistance = distance1 + distance2; //обчислення загальної відстані.
    float totalTime = time1 + time2; //обчислення загального часу.

    float averageSpeed = totalDistance / totalTime; //обчислення середньої швидкості як дробового числа.

    printf("Serednia shvydkist: %.2f km/hod\n", averageSpeed); //виведення середньої швидкості з точністю до 2 знаків після коми.

    return 0; //завершення програми з кодом 0.
}
