#include<iostream>
#include<string>
using namespace std;
int main()
{
	while (true)
	{
		int cout_500 = 0, cout_200 = 0, cout_100 = 0, cout_50 = 0, n = 0, x = 0;
		int  string_length = 0, string_position = 0 ;
		string account, password;
		do
		{

			cout << "Nhap tai khoan: ";
			cin >> account;
			cout << "Nhap mat khau: ";
			if (password.at(string_position))
			{
				cin >> password;
			}
			string_length = password.length();

		} while (account != "Hoanghai" || password != "123456" || string_length > 6);
		cout << "1. Rut tien tu tai khoang" << endl;
		cout << "2. Chuc nang khac" << endl;
		do
		{
			cout << "Nhap so thu tu chuc nang tuong ung: ";
			cin >> x;
		} while (!(x==1 || x==2));
		if (x == 1)
		{
			do
			{
				cout << "So tien co trong tai khoang: 10,000,000" << endl;
				cout << "So tien can rut: ";
				cin >> n;
			} while (n >= 10000000 and n % 50000 != 0);
			if (n / 500000 != 0)
			{
				cout_500 = n / 500000;
				n = n % 500000;
			}
			if (n / 200000 != 0)
			{
				cout_200 = n / 200000;
				n = n % 200000;
			}
			if (n / 100000 != 0)
			{
				cout_100 = n / 100000;
				n = n % 100000;
			}
			if (n / 50000 != 0)
			{
				cout_50 = n / 50000;
				n = n % 50000;
			}
			cout << "So tien rut duoc la" << endl;
			cout << "So to " << cout_500 << " to 500,000" << endl;
			cout << "So to " << cout_200 << " to 200,000" << endl;
			cout << "So to " << cout_100 << " to 100,000" << endl;
			cout << "So to " << cout_50 << " to 50,000" << endl;
			cout << "Ket thuc chuong trinh";
		}
		else if (x == 2)
		{
			cout << "1. Rut het tien" << endl;
			cout << "2. Ket thuc chuong trinh" << endl;
			do
			{
				cout << "Nhap so thu tu chuc nang tuong ung: ";
				cin >> x;
			} while (!(x == 1 || x == 2));
			if (x == 1)
			{
				cout << "Da rut het tien ATM";
				cout << "Ket thuc chuong trinh";
			}
			else if (x == 2)
			{
				cout << "Ket thuc chuong trinh";
			}
		}
	}
}