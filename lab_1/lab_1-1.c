#include <stdio.h>

int main() {
    int a = 5; //оголошення цілого числа a зі значенням 5.
    int b = 2; //оголошення цілого числа b зі значенням 2.

    float result = (float)a / b; //перетворення a у float для правильного ділення з результатом типу float.

    printf("Rezultat: %f\n", result); //виведення результату ділення як float.

    return 0; //завершення програми з кодом 0.
}
