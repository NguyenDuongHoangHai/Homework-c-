#include<iostream>;
using namespace std;
int main()
{
	int a, b;
	cout << "Nhap so thu 1: ";
	cin >> a;
	cout << "Nhap so thu 2: ";
	cin >> b;
	cout << "Hoan vi lan 1" << "a=:" << a << "b=:" << b << endl;
	a = a + b;
	b = a - b;
	a = a - b;
	cout << "Hoan vi lan 2" << "a=:" << a << "b=:" << b << endl;
	a = a * b;
	b = a / b;
	a = a / b;

}