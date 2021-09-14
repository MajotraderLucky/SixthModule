#include <iostream>

int main() {
    std::cout << "Вас приветствует рекламный отдел зоопарка!\n";
    std::string answer;
    std::cout << "Купи слона!\n";
    do {
        std::getline(std::cin, answer);
       // std::cin >> answer;
        std::cout << "Все говорят " << answer << " а ты купи слона!\n";
    } while (0 < 2);
}
