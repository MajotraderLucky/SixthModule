#include <iostream>

int main() {
    int i = 2;
    int m;
    std::cout << "Add M ---> ";
    std::cin >> m;
    int n;
    std::cout << "Add N ---> ";
    std::cin >> n;
       if (m < n) {
           do {
               if (((m % i) == 0) && ((n % i) == 0)) {
                   m /= i;
                   n /= i;
               } else {
                   ++i;
               }
           } while (i < n);
           std::cout << "M = " << m << " N = " << n << "\n";
       }
}
