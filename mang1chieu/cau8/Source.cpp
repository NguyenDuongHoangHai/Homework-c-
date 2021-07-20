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
void timsophanbiettrongman(int a[],int b[],  int n, int &m)
{
	b[m] = a[0];
	m++;
	for (int i = 1; i < n; i++)
	{
		bool kiemtra = true;
		for (int j = i - 1; j >= 0; j--)
		{
			if (a[i] == a[j])
			{
				kiemtra = false;
				break;
			}
		}
		if (kiemtra == true)
		{
			b[m] = a[i];
			m++;
		}
	}
}
void demsolanxuathien(int a[], int b[], int n, int m)
{
	timsophanbiettrongman(a, b, n, m);
	for (int i = 0; i < m; i++)
	{
		int count = 0;
		int j =0 ;
		for ( j = 0; j < n; j++)
		{
			if (b[i] == a[j])
			{
				count++;
			}			
		}
		cout << "so lan xuat hien: " << b[i] << " \t" << count << endl;
	}
}
int main()
{
	int n,m=0;
	int a[max];
	int b[max];
	cout << "Nhap so luong phan tu mang: ";
	cin >> n;
	nhapmang(a, n);
	xuatmang(a, n);
	demsolanxuathien(a, b, n, m);
	return 0;
}