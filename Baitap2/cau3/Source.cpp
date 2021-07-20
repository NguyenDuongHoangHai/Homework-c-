#include<iostream>
using namespace std;
int main()
{	
	// nhap du lieu dau vao
	float a, b, c;
	cout << "Nhap diem chuyen can: ";
	cin >> a;
	cout << "Nhap diem giua ky: ";
	cin >> b;
	cout << "Nhap diem cuoi ky: ";
	cin >> c;
	//tinh toan diem trung binh
	a = a * 0.1 + b * 0.3 + c * 0.6;
	if (a < 5)
	{
		cout << "Xep loai D";
	}
	else if (a >= 5 and a < 7)
	{
		cout << "Xep loai B";
	}
	else if (a >= 7 and a <= 9)
	{
		cout << "Xep loai C";
	}
	else
	{
		cout << "Xep loai A";
	}
}