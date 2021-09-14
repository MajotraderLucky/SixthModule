#include <iostream>

int main() {
std::cout << "Инициализация программы Робот-Начальник.\n";
std::cout << "----------------------------------------\n";
std::string answer;
std::string goodAnswer = "Да, конечно, сделал";
    while (answer != goodAnswer) {
        std::cout << "Были ли сделаны задания, выданные вчера?\n";
        std::getline(std::cin, answer);
    }
    std::cout << "Молодец!\n";
    return 0;
}
