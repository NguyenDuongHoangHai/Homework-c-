#include<iostream>
using namespace std;
#define max 100

void nhapmang(float a[], int n)
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
void xuatmang(float a[], int n)
{
	int index = 0;
	cout << "Bat dau xuat mang" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "xuat phan tu " << index << " : " << a[i] << endl;
		index++;
	}
}
void in_sobenhat(float a[], int n)
{
	float min = a[0];
	for (int i = 0; i < n; i++)
	{
		if (min > a[i])
		{
			min = a[i];
		}		
	}
	cout << "Day la so be nhat : " << min << endl;
}
int main()
{
	float a[max];
	float n;
	cout << "Nhap so luong phan tu: ";
	cin >> n;
	nhapmang(a, n);
	xuatmang(a, n);
	in_sobenhat(a, n);
}