#include <iostream>

int main() {
     std::cout << "Введите имя должника ---> ";
     std::string name;
     std::cin >> name;
     std::cout << "Введите сумму задолженности ---> ";
     int sum;
     std::cin >> sum;
     int credit;
       do {
           std::cout << name << " ваша задолженность составляет " << sum << " рублей. \n";
           std::cout << "Оплатите немедленно! ---> ";
           std::cin >> credit;
           sum -= credit;
       } while (sum > 0);
       std::cout << name << ", вы молодец! Вы полностью оплатили задолженность!\n";
}
