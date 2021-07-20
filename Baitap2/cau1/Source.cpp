#include<iostream>;
using namespace std;
int main()
{
	//Nhập dữ liệu
	int a, b;
	cout << "Nhap so thu 1: ";
	cin >> a;
	cout << "Nhap so thu 2: ";
	cin >> b;
	//Chương trình logic
	if (a > b )
	{
		cout << "So lon nhat la: " << a;
	}
	else
	{
		cout << "So lon nhat la: " << b;
	}
}