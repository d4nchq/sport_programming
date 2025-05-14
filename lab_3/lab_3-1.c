#include <stdio.h>

int main() {
    float meters; //змінна для зберігання довжини в метрах.
    float centimeters, millimeters; // змінні для зберігання результатів перетворення.
    
    //введення даних від користувача.
    printf("Vvedit dovzhynu v metrakh: ");
    scanf("%f", &meters);
    
    //обчислення сантиметрів та міліметрів.
    centimeters = meters * 100; //множимо на 100 щоб отримати сантиметри.
    millimeters = meters * 1000; //множимо на 1000 щоб отримати міліметри.
    
    //виведення результатів перетворення.
    printf("%.2f metriv = %.2f santymetriv\n", meters, centimeters);
    printf("%.2f metriv = %.2f milimetriv\n", meters, millimeters);
    
    return 0; //завершення програми з кодом успішного виконання.
}