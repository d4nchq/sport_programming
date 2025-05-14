#include <stdio.h>

int main() {
    char symbol; //оголошення змінної для зберігання введеного символу.
    
    //запит введення символу від користувача.
    printf("Vvedit symvol: ");
    scanf("%c", &symbol); //зчитування символу з клавіатури.

    char nextSymbol = symbol + 1; //обчислення наступного символу в таблиці ASCII.

    printf("Nastupnyi symvol: %c\n", nextSymbol); //виведення наступного символу на екран.

    return 0; //завершення програми з кодом 0.
}
