#include <iostream>

int main() {
    std::string answer;
    int min = 1;
    int max = 64;
    int middle = (min + max) / 2;
    std::string yes = "Да";
    std::string yes2 = "да";
    std::string no = "Нет";
    std::string no2 = "нет";
       do {
           std::cout << "Your number is " << middle << "\n";
           std::cout <<"---> ";
           std::cin >> answer;
              if (answer == no || answer == no2) {
                  std::cout << "Your number is biggest?\n";
                  std::cout << "---> ";
                  std::cin >> answer;
                  if (answer == yes || answer == yes2) {
                      min = middle;
                      middle = (min + max) / 2;
                  } else if (answer == no || answer == no2) {
                    max = middle;
                    middle = (min + max) / 2;
                  }
              } else if (answer == yes || answer == yes2) {
                  break;
              }
       } while (answer != yes || answer != yes2);
       std::cout << "Загаданное число = " << middle << "\n";
}
