#include <stdio.h> //підключення бібліотеки для вводу-виводу.

int main() {
    char lowercase; //оголошення змінної для малої літери.

    printf("Vvedit malu literu anhliiskoho alfavitu: "); //виведення запиту для введення літери.
    scanf("%c", &lowercase); //зчитування літери з клавіатури.

    if (lowercase >= 'a' && lowercase <= 'z') { //перевірка, чи введено малу літеру.
        char uppercase = lowercase - 32; //перетворення малої літери на велику (різниця в ASCII).
        printf("Velyka litera: %c\n", uppercase); //виведення великої літери.
    } else {
        printf("Pomylka: vvedit malu literu anhliiskoho alfavitu.\n"); //виведення повідомлення про помилку.
    }

    return 0; //успішне завершення програми.
}