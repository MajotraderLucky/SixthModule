#include <iostream>

int main() {
    int count;
    long f, f1 = -1, f2 = 1;
    std::cout << "Введите порядок числа фибоначчи ---> ";
    std::cin >> count;
       do {
           f = f1 + f2;
           f1 = f2;
           f2 = f;
           count--;
       } while (count > -1);
       std::cout << f << "\n";
}