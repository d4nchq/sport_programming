#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2, distance;
    
    // запитуємо користувача ввести координати першої точки.
    printf("Vvedit koordynatu x pershoi tochky: ");
    scanf("%lf", &x1);
    printf("Vvedit koordynatu y pershoi tochky: ");
    scanf("%lf", &y1);
    
    // запитуємо користувача ввести координати другої точки.
    printf("Vvedit koordynatu x druhoi tochky: ");
    scanf("%lf", &x2);
    printf("Vvedit koordynatu y druhoi tochky: ");
    scanf("%lf", &y2);
    
    // обчислюємо відстань за формулою евклідової відстані.
    distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    
    // виводимо результат обчислення.
    printf("Vidstan mizh tochkamy: %.2lf\n", distance);
    
    return 0;
}
