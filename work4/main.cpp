#include "iostream"

int main() {
int A, B, C;

std::cin >> A >> B >> C;


if (A < B && B < C) {
    std::cout << "Разность C-B-A: " << C - B - A << std::endl;
} else if (A % C == 0) {
    std::cout << "Частное A/C + B: " << A / C + B << std::endl;
} else {
    std::cout << "Сумма A+B+C: " << A + B + C << std::endl;
}

return 0;
}

int main() {
    int N;

    std::cout << "Введите код товара: ";
    std::cin >> N;

    switch(N) {
        case 1:
            std::cout << "Шоколад" << std::endl;
            break;
        case 2:
            std::cout << "Молоко" << std::endl;
            break;
        case 3:
            std::cout << "Хлеб" << std::endl;
            break;
        case 4:
            std::cout << "Яблоки" << std::endl;
            break;
        case 5:
            std::cout << "Картофель" << std::endl;
            break;
        default:
            std::cout << "Такого товара не существует" << std::endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int x = 1;

    if (x == -1) {
        cout << "Negative number" << endl;
    } else {
        cout << "Positive number" << endl;
    }

    return 0;
}