#include <stdio.h>

int main() {
    double price, discount, final_price;
    
    // запитуємо користувача ввести вартість товару.
    printf("Vvedit vartist tovaru: ");
    scanf("%lf", &price);
    
    // запитуємо користувача ввести відсоток знижки.
    printf("Vvedit vidsotok znyzhky: ");
    scanf("%lf", &discount);
    
    // обчислюємо кінцеву вартість з урахуванням знижки.
    final_price = price * (1 - discount / 100);
    
    // виводимо кінцеву вартість товару.
    printf("Kintseva vartist tovaru: %.2lf\n", final_price);
    
    return 0;
}
