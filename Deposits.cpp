#include <iostream>

int main() {
       int x, y, p;
       int sum;
       int HowYears = 0;
    std::cout << "Add X = ---> ";
    std::cin >> x;
    std::cout << "Add P = ---> ";
    std::cin >> p;
    std::cout << "Add Y = ---> ";
    std::cin >> y;
       do {
           sum += (x / 100) * p;
           ++HowYears;
       } while (sum < y);
       std::cout << "Years = " << HowYears << "\n";
}
