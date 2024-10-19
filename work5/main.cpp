#include <iostream>
#include <cmath>

int main() {
    double Aj;
    int n = 0;
    int count = 0;
    double min_neg = 0.0;
    double prod_neg = 1.0;

    std::cout << "Enter the number of elements in the sequence: ";
    std::cin >> n;

    for (int i = 1; i <= n; ++i) {
        std::cout << "Enter element " << i << ": ";
        std::cin >> Aj;

        if (Aj < 0 && Aj - floor(Aj) != 0) {
            count++;
            prod_neg *= Aj;
            if (min_neg == 0.0 || Aj < min_neg) {
                min_neg = Aj;
            }
        }
    }

    if (count == 0) {
        std::cout << "There are no negative numbers with a non-zero fractional part in the sequence." << std::endl;
    } else {
        std::cout << "Product of negative numbers with non-zero fractional part: " << prod_neg << std::endl;
        std::cout << "Smallest negative number with non-zero fractional part: " << min_neg << std::endl;
        std::cout << "Position of the smallest negative number in the sequence: " << count << std::endl;
    }

    int N;
    std::cout << "Enter a natural number: ";
    std::cin >> N;

    int min_digit = 9;
    while (N > 0) {
        int digit = N % 10;
        if (digit < min_digit) {
            min_digit = digit;
        }
        N /= 10;
    }

    std::cout << "The smallest digit of the number is: " << min_digit << std::endl;

    return 0;
}