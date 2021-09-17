#include <iostream>

int main() {
    std::cout << "Для доступа к банкомату введите пароль ---> \n";
       int password;
       std::cin >> password;
       int sum     = 0;
       int remaind = 0;
       int count   = 0;
          do {
              sum += password % 10;
              password /= 10;
                 if (password == 0) {
                     if (sum == 42) {
                         std::cout << "Пароль принят!\n";
                     } else {
                         std::cout << "В доступе отказано!\n";
                     }
                 }
             } while (password != 0);
}
