#include <iostream>

int main() {
       int x, y, p;
       int HowYears = 0;
    std::cout << "Add sum for investing --------------> ";
    std::cin >> x;
    std::cout << "Add the percentage of the deposit---> ";
    std::cin >> p;
    std::cout << "Add the required amount-------------> ";
    std::cin >> y;
       do {
           x += (x * p) / 100;
           ++HowYears;
       } while (x < y);
       std::cout << "Reach the required amount = " << HowYears << "\n";
}
