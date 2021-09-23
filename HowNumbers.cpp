#include <iostream>

int main() {
std::cout << "Введите число ---> ";
    int number;
    std::cin >> number;
    int count = 0;
     do {
         number /= 10;
         ++count;
     } while (number > 0);
     std::cout << "Количество цифр в числе = " << count << "\n";
}
