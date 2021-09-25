#include <iostream>

int main() {
    std::cout << "Введите целое число ---> ";
    int number;
    std::cin >> number;
       do {
           if (number % 2 == 0) {
               number /= 2;
           } else {
               break;
           }
       } while (number > 0);
           if (number == 1) {
               std::cout << "Число является степенью двойки\n";
           } else {
               std::cout << "Число не является степенью двойки\n";
           }
}
