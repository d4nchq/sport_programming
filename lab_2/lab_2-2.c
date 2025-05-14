#include <stdio.h>

int main() {
    int quantity; //оголошення змінної для зберігання кількості товарів.
    float pricePerUnit; //оголошення змінної для зберігання ціни за одиницю товару.
    float totalCost; //оголошення змінної для зберігання загальної вартості.

    //запит введення кількості товарів.
    printf("Vvedit kilkist tovariv: ");
    scanf("%d", &quantity); //зчитування кількості товарів з клавіатури.

    //запит введення ціни за одиницю товару.
    printf("Vvedit tsinu za odynytsiu: ");
    scanf("%f", &pricePerUnit); //зчитування ціни з клавіатури.

    totalCost = quantity * pricePerUnit; //обчислення загальної вартості покупки.

    printf("Zahalna vartist pokupky: %.2f\n", totalCost); //виведення загальної вартості з точністю до 2 знаків після коми.

    return 0; //завершення програми з кодом 0.
}
