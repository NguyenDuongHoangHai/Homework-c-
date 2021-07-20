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
void xoaphantu(int a[], int& n, int vt)
{
	cout << "Xu ly them phan tu vao mang :";
	for (int i = vt - 1; i < n - 1; i++)
	{
		a[i] = a[i+1];
	}
	n--;
}
int main()
{
	int n;
	int a[max];
	cout << "Nhap so luong phan tu mang: ";
	cin >> n;
	nhapmang(a, n);
	xuatmang(a, n);

	int vt;
	cout << "Nhap vi tri xoa vao mang : ";
	cin >> vt;
	xoaphantu(a, n, vt);
	xuatmang(a, n);	
	return 0;
}