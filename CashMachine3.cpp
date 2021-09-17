#include <iostream>

int main() {
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int sum = 0;
       do {
           std::cout << "Для доступа к банкомату введите пароль.\n";
           std::cout << "* * * * ---> \n";
           std::cin >> a >> b >> c >> d;
              sum = a + b + c + d;
              if (sum != 42) std::cout << "Вы ввели неверный пароль!\n";
                  std::cout << "$$$$$$$$$$$$\n";
       } while (sum != 42);
       std::cout << "Пароль принят.\n";
}