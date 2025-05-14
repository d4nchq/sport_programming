#include <stdio.h>

int main() {
    int number; //оголошення змінної для зберігання введеного числа.
    int digit1, digit2, digit3; //змінні для зберігання окремих цифр числа.
    int reversedNumber; //змінна для зберігання числа у зворотному порядку.

    //запит введення тризначного числа від користувача.
    printf("Vvedit tryznachne chyslo: ");
    scanf("%d", &number); //зчитування тризначного числа з клавіатури.

    digit1 = number % 10; //отримання останньої цифри.
    digit2 = (number / 10) % 10; //отримання середньої цифри.
    digit3 = number / 100; //отримання першої цифри.

    reversedNumber = digit1 * 100 + digit2 * 10 + digit3; //формування числа у зворотному порядку.

    printf("Chyslo u zvorotnomu poriadku: %d\n", reversedNumber); //виведення зворотного числа.

    return 0; //завершення програми з кодом 0.
}
