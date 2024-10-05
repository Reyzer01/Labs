#include "iostream"

using namespace std;

int main()
{
	int x = 50;
	int i;
	cin >> i;
	x &= ~(1 << i);
	cout << x << endl;
	return 0;
}