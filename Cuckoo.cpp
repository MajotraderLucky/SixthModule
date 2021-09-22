#include <iostream>

int main() {
    std::cout << "Который сейчас час? Введите значение от 1 до 24\n";
    std::cout << "---> ";
       int hour;
       std::cin >> hour;
       std::string clockVoice = "Ку-ку\n";
       int count = 1;
    if(hour > 0 && hour <= 24) {
        do {
            std::cout << count << " - " << clockVoice << "\n";
            ++count;
        } while (count <= hour);
    } else {
        std::cout << "Вы ввели неверное значение!\n";
    }
}
