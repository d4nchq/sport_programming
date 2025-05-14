#include <stdio.h>

int main() {
    int number, sum;
    
    // запитуємо користувача ввести тризначне число.
    printf("Vvedit tryznachne chyslo: ");
    scanf("%d", &number);
    
    // обчислюємо суму цифр числа.
    sum = (number / 100) + ((number % 100) / 10) + (number % 10);
    
    // виводимо суму цифр числа.
    printf("Suma tsyfr: %d\n", sum);
    
    return 0;
}
