#include "iostream"
using namespace std;
int main() {
unsigned int A, B, C;

cin >> A >> B >> C;


if (A < B && B < C) {
    cout << " C-B-A: " << C - B - A << endl;
} else if (A % C == 0) {
    cout << " A/C+B: " << A / C + B << endl;
} else {
    cout << " A+B+C: " << A + B + C << endl;
}





    int N;

    cout << "Enter the product code: ";
    cin >> N;

    switch(N) {
        case 1:
            cout << "Yogurt" << endl;
            break;
        case 2:
            cout << "Milk" << endl;
            break;
        case 3:
            cout << "Bread" << endl;
            break;
        case 4:
            cout << "Apples" << endl;
            break;
        case 5:
            cout << "Potatoes" << endl;
            break;
        default:
            cout << "This product does not exist" << endl;
    }

  



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