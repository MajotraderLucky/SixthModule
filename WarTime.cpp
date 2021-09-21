#include <iostream>

int main() {
       std::cout << "Make reverse number\n";
          int number;
       std::cout << "Enter the number\n";
       std::cout << "---> ";
       std::cin >> number;
          int reverseNumber = number % 10;
          do {
              if (number >= 10) {
                  reverseNumber *= 10;
                  number /= 10;
                  reverseNumber += number % 10;
                     if (number < 10) {
                         std::cout << "reverseNumber = " << reverseNumber << "\n";
                         break;
                     }
              }
          } while (number >= 0);
}
