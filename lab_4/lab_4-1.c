#include <stdio.h> //підключення бібліотеки для вводу-виводу.

int main() {
    float original_price = 450.0; //оголошення змінної для початкової ціни.
    float discount = 15.0; //оголошення змінної для відсотка знижки.
    float discounted_price; //оголошення змінної для ціни зі знижкою.

    discounted_price = original_price * (1 - discount / 100); //обчислення ціни зі знижкою.
    printf("%d\n", (int)discounted_price); //виведення ціни зі знижкою як цілого числа.

    return 0; //успішне завершення програми.
}