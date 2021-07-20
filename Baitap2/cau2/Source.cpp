#include<iostream>;
using namespace std;
int main()
{
	//Nhập dữ liệu
	int a, b, c;
	cout << "Nhap so thu 1: ";
	cin >> a;
	cout << "Nhap so thu 2: ";
	cin >> b;
	cout << "Nhap so thu 3: ";
	cin >> c;
	//Chương trình logic
	if (a < b and a < c)
	{
		cout << "So be nhat la: " << a;
	}
	else if (b < a and b < c)
	{
		cout << "So be nhat la: " << b;
	}
	else
	{
		cout << "So be nhat la: " << c;
	}
}	