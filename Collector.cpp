#include <iostream>

int main() {
     std::cout << "Введите имя должника ---> ";
     std::string name;
     std::cin >> name;
     std::cout << "Введите сумму задолженности ---> ";
     int credit;
     std::cin >> credit;
     int payment = 0;
       do {
           std::cout << name << " ваша задолженность составляет " << credit << " рублей. \n";
           std::cout << "Оплатите немедленно! ---> ";
           std::cin >> payment;
       } while (payment < credit);
       std::cout << name << ", вы полностью оплатили задолженность!\n";
}
