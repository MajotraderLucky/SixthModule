#include <iostream>

int main(){
    std::cout << "Напоминалка для менеджера\n";
    std::cout << "О чём вам напомнить?\n";
    std::cout << "---> ";
       std::string answer;
    std::getline(std::cin, answer);
    std::cout << "Сколько раз вам напомнить об этом?\n";
    std::cout << "---> ";
       int countRemind;
    std::cin >> countRemind;
       int count = 0;
       do {
           std::cout << answer << " -  " << count << "\n";
           count++;
       } while (count <= countRemind);
}