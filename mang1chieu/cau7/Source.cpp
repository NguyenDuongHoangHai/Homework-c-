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
void in_phantulecuoicung(int a[], int n)
{
	cout << "in gia tri cua phan tu le cuoi cung: ";
	for (int i = n-1; i>=0 ; i--)
	{
		if (a[i] %2 != 0)
		{
			cout << a[i];
			return;
		}
	}
	cout << "Khong co gia tri";
}
int main()
{
	int n;
	int a[max];
	cout << "Nhap so luong phan tu mang: ";
	cin >> n;
	nhapmang(a, n);
	xuatmang(a, n);
	in_phantulecuoicung(a, n);
	return 0;
}