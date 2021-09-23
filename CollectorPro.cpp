#include <iostream>

int main() {
    std::cout << "Введите имя должника ---> ";
    std::string name;
    std::cin >> name;
    std::cout << "Сколько должен " << name << "?\n";
       int credit;
       std::cin >> credit;
       int payment;
    do {
        std::cout << name << " Вы должны " << credit << " рублей\n";
        std::cout << "Немедленно оплатите задолженность!\n";
        std::cout << "Внесите платеж ---> ";
        std::cin >> payment;
           if (payment < credit) {
               credit -= payment;
           } else {
               payment -= credit;
               credit = payment;
               break;
           }
    } while (credit > 0);
    std::cout << name << " Ваш кредит закрыт. На вашем счету " << credit << " рублей.\n";
}
