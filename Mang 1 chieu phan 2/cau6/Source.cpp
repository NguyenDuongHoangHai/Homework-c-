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
int timkhoangcachlonnhat(int a[], int n,int x)
{

	int far = abs(a[0] - x);
	for (int i = 1; i < n; i++)
	{
		if (abs(a[i] - x) > far)
		{
			far = abs(a[i] - x);
		}
	}
	return far;
}
void thuattoan(int a[], int n,int x)
{
	for (int i = 0; i < n; i++)
	{
		if (timkhoangcachlonnhat(a, n, x) == abs(a[i]-x))
		{
			cout << "Day la khoang cach lon nhat: " << a[i] << endl;
		}
	}
}
int main()
{
	int n,x, m = 0;
	int a[max];
	cout << "Nhap so luong phan tu mang: ";
	cin >> n;
	nhapmang(a, n);
	xuatmang(a, n);
	cout << "Nhap gia tri x: ";
	cin >> x;
	thuattoan(a, n,x);
	return 0;
}