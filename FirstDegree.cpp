#include <iostream>

int main() {
std::cout << "Программа выводит N первых степеней числа K\n";
int k, n;
std::cout << "Введите число K ---> ";
std::cin >> k;
std::cout << "Введите число первых степеней N ---> ";
std::cin >> n;
int m = k;
int count = 0;
    do {
        std::cout << m << "\n";
        count++;
    } while (count <= m);
}