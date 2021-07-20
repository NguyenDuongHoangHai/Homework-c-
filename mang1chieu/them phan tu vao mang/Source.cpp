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
void themphantu(int a[], int& n, int vt, int x)
{
	cout << "Xu ly them phan tu vao mang :";
	for (int i = n - 1; i >= vt; i--)
	{
		a[i + 1] = a[i];
	}
	a[vt] = x;
	n++;
}
int main()
{
	int n;
	int a[max];
	cout << "Nhap so luong phan tu mang: ";
	cin >> n;
	nhapmang(a, n);
	xuatmang(a, n);

	int vt, x;
	cout << "Nhap gia tri them vao mang : ";
	cin >> x;
	cout << "Nhap vi tri them vao mang : ";
	cin >> vt;
	themphantu(a, n, vt, x);
	xuatmang(a, n);
	return 0;
}