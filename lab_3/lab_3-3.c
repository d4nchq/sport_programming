#include <stdio.h> //підключення бібліотеки для вводу-виводу.

int main() {
    int total_seconds; //оголошення змінної для загальної кількості секунд.
    int hours, minutes, seconds; //оголошення змінних для годин, хвилин і секунд.

    printf("Vvedit kilkist sekund: "); //виведення запиту для введення секунд.
    scanf("%d", &total_seconds); //зчитування кількості секунд з клавіатури.

    hours = total_seconds / 3600; //обчислення годин (3600 секунд в 1 годині).
    minutes = (total_seconds % 3600) / 60; //обчислення хвилин із залишкових секунд.
    seconds = total_seconds % 60; //обчислення залишкових секунд.

    printf("%d sekund = %d hodyn, %d khvylyn, %d sekund\n", total_seconds, hours, minutes, seconds); //виведення результату.

    return 0; //успішне завершення програми.
}