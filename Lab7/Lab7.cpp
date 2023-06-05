#include <iostream>
#include <Windows.h>
using namespace std;

// Функция для удаления заданного символа из начала и конца строки
void removeCharFromEnds(char str[], char ch) {
    int start = 0;
    int end = 0;

        // Определяем начало строки без символа ch
        while (str[start] == ch) {
            start++;
        }

    // Определяем конец строки без символа ch
    while (str[end] != '\0') {
        end++;
    }
    end--;

    // Удаление символа из конца строки
    while (end >= start && str[end] == ch) {
        str[end] = '\0';
        end--;
    }

    // Удаление символов из начала строки
    int i = 0;
    while (str[start] != '\0') {
        str[i] = str[start];
        i++;
        start++;
    }
    str[i] = '\0';
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char input[100];
    char ch;

        cout << "Введите строку: ";

     // Считываем строку c пробелами
    int c;
    int i = 0;
    while ((c = getc(stdin)) != '\n' && i < sizeof(input) - 1) {
        input[i] = static_cast<char>(c);
        i++;
    }
    input[i] = '\0';
    cout << "Введите символ для удаления: ";
    cin >> ch;  // Считываем символ для удаления

    removeCharFromEnds(input, ch);  // Вызываем функцию для удаления символа

    cout << "Результат: " << input << endl;  // Выводим результат

    return 0;
}









