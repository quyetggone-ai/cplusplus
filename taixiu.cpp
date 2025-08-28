#include <iostream>


int main() {

    std::string cuadat;
    srand(time(NULL));

    std::cout << "Tai hay xiu(nhap tai hay xiu): ";
    std::getline(std::cin, cuadat);

    if (cuadat == "xiu" || cuadat == "tai") {
        int num1 = (rand() % 6) + 1;
        int num2 = (rand() % 6) + 1;
        int num3 = (rand() % 6) + 1;

        int sum = num1 + num2 + num3;
        if (sum >=10) {
            std::cout << "Tai" << std::endl;
        }
        else {
            std::cout << "Xiu" << std::endl;
        }
    }
    else {
        std::cout << "Vui long nhap dung";
    }



    return 0;
}
