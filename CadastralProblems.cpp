#include <iostream>

int main() {
  int square;
  std::cout << "Введите площадь участка \n---> ";
  std::cin >> square;
      int divider = 2;
    do {
        if ((square % divider) == 0) {
            ++divider;
            if ((divider * divider) == square) {
                std::cout << "Число " << square << "Является квадратом числа " << divider << "\n";
                break;
            }
        } else {
            ++divider;
            if ((divider * divider) == square) {
                std::cout << "Число " << square << " Является квадратом числа " << divider << "\n";
                break;
            }
        }
    } while (divider < square);
    if ((divider * divider) != square) std::cout << "Заданное число не является квадратом другого числа\n";
}