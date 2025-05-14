#include <stdio.h> //підключення бібліотеки для вводу-виводу.

int main() {
    int number; //оголошення змінної для цілого числа.

    printf("Vvedit tsile chyslo: "); //виведення запиту для введення числа.
    scanf("%d", &number); //зчитування числа з клавіатури.

    if (number % 2 == 0) { //перевірка, чи число парне.
        printf("%d ye parnym chyslom.\n", number); //виведення повідомлення, якщо число парне.
    } else {
        printf("%d ye neparnym chyslom.\n", number); //виведення повідомлення, якщо число непарне.
    }

    return 0; //успішне завершення програми.
}