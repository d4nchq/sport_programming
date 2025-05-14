#include <stdio.h>

int main() {
    int integerNumber; //оголошення змінної для зберігання цілого числа.
    float floatNumber; //оголошення змінної для зберігання дробового числа.
    float sum; //оголошення змінної для зберігання суми.

    //запит введення цілого числа від користувача.
    printf("Vvedit tsile chyslo: ");
    scanf("%d", &integerNumber); //зчитування цілого числа з клавіатури.

    //запит введення дробового числа від користувача.
    printf("Vvedit drobove chyslo: ");
    scanf("%f", &floatNumber); //зчитування дробового числа з клавіатури.

    sum = integerNumber + floatNumber; //обчислення суми цілого і дробового числа.

    printf("Suma: %f\n", sum); //виведення суми на екран.

    return 0; //завершення програми з кодом 0.
}
