#include <iostream>
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
void hoanvi(int &x, int &y)
{
	int tam = x;
	x = y;
	y = tam;
}
void xulymang(int a[], int n)
{
	// lay mảng chia 2 rồi lần lượt hoán vị
	// phần tử thứ 1 với phần tử cuối
	// phần tử thứ 2 với kế cuối
	// hoán vị số lần bằng số mảng /2
	int b = n / 2;

	for (int i=0; i <= b;i++)
	{
		hoanvi(a[i], a[(n-1) - i]);
	}
}
int main()
{
	int n;
	int a[max];
	cout << "Nhap so luong phan tu mang: ";
	cin >> n;
	nhapmang(a, n);
	xulymang(a, n);
	xuatmang(a, n);
	return 0;
}