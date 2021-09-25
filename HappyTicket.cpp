#include <iostream>

int main() {
    std::cout << "Введите номер билета ---> ";
    int number;
    std::cin >> number;
    int number2 = number;
    int count = 0;
    int sum = 0;
    int sum2 = 0;
      do {
        number /= 10;
        ++count;
      } while (number > 0);
        if (count == 6) {
            do {
                sum += number2 % 10;
                number2 /= 10;
                --count;
            } while (count > 3);
               do {
                   sum2 += number2 % 10;
                   number2 /= 10;
                   --count;
               } while (count > 0);
                  if (sum == sum2) {
                      std::cout << "Ваш билет счастливый! \n";
                  } else {
                      std::cout << "Ваш билет обычный\n";
                  }
        } else {
            std::cout << "Номер билета должен быть шестизначный!\n";
        }
}
