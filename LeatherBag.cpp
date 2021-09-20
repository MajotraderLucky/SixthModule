#include <iostream>

int main() {
    int number;
   std::cout << "Проверяем принадлежность числа к двоичной системе счисления\n";
   std::cout << "Введите целое число ---> ";
   std::cin >> number;
    int remainder = 0;
    do {
        remainder = number % 10;
        number /= 10;
           if (remainder > 1 || remainder < 0) {
            std::cout << "Число не принадлежит двоичной системе счисления\n";
               break;
           } else if (number == 0) {
               std::cout << "Число принадлежит двоичной системе счисления\n";
           }
    } while (number > 0);
}
