#include "iostream"
using namespace std;
int main() {
unsigned int A, B, C;

cin >> A >> B >> C;


if (A < B && B < C) {
    cout << "Разность C-B-A: " << C - B - A << endl;
} else if (A % C == 0) {
    cout << "Частное A/C + B: " << A / C + B << endl;
} else {
    cout << "Сумма A+B+C: " << A + B + C << endl;
}

return 0;
}

int main() {
    int N;

    cout << "Введите код товара: ";
    cin >> N;

    switch(N) {
        case 1:
            cout << "Йогурт" << endl;
            break;
        case 2:
            cout << "Молоко" << endl;
            break;
        case 3:
            cout << "Хлеб" << endl;
            break;
        case 4:
            cout << "Яблоки" << endl;
            break;
        case 5:
            cout << "Картофель" << endl;
            break;
        default:
            cout << "Такого товара не существует" << endl;
    }

    return 0;
}

int main() {
    int x;
    cin >> x;

    if (x == -1) {
        cout << "Negative number" << endl;
    } else if(x == 1) {
        cout << "Positive number" << endl;
    } else {
        cout << "Wrong number" << endl;
    }

    return 0;
}