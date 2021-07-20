#include<iostream>
using namespace std;
#define max 100

void nhapmang(int a[], int n)
{
	int index = 0;
	cout << "Bat dau nhap mang" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "nhap mang " << index << ": ";
		cin >> a[i];
		index++;
	}
}
void xuatmang(int a[], int n)
{
	int index = 0;
	cout << "Bat dau xuat mang" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "xuat phan tu " << index << " : " << a[i] << endl;
		index++;
	}
}
bool timso_doixung(int n)
{
	int dapan = 0;
	int sobandau = n;
	while (n != 0)
	{
		dapan = dapan * 10 + n % 10 ;
		n /= 10;
	}
	if (dapan == sobandau)
	{
		return true;
	}
	return false;
}
int tinhtong(int a[], int n)
{
	int tong = 0;
	for (int i = 0; i < n; i++)
	{
		if (timso_doixung(a[i]) == true)
		{
			tong = a[i] + tong;
		}
	}
	return tong;
}
int main()
{
	int a[max];
	int n;
	cout << "Nhap so luong phan tu: ";
	cin >> n;
	nhapmang(a, n);
	xuatmang(a, n);
	int tong = tinhtong(a, n);
	cout << "Gia tri cuoi cung cua phep tinh: " << tong;
}