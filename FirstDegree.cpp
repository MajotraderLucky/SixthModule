#include <iostream>

int main() {
    std::cout << "Программа выводит N степеней числа K\n";
    int k, n;
    std::cout << "Введите число K ---> ";
    std::cin >> k;
    std::cout << "Введите степень числа N ---> ";
    std::cin >> n;
    int result = 1;
    int count = 0;
       do {
           result *= k;
           ++count;
              if (count == n) std::cout << "Число " << n << " в степени " << k << " = " << result << "\n";
       } while (count < n);
}