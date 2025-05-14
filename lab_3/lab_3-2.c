#include <stdio.h>
#define PI 3.14 // визначення константи пі самостійно.

int main() {
    float radius; // змінна для зберігання радіусу кола.
    float area;   // змінна для зберігання площі кола.
    
    // введення радіусу від користувача.
    printf("Vvedit radius kola: ");
    scanf("%f", &radius);
    
    // обчислення площі кола за формулою S = pi * r^2.
    area = PI * radius * radius;  // множимо радіус на себе для отримання квадрата.
    
    // виведення результату обчислення.
    printf("Ploshcha kola z radiusom %.2f = %.2f\n", radius, area);
    
    return 0; // завершення програми з кодом успішного виконання.
}