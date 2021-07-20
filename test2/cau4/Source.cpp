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
void ingiatri(int a[], int j,int i,int &tongmang,int dieukien)
{
	for (int z = i; z <= j; z++)
	{
		if (dieukien == 2)
		{
			cout << a[z];
		}
		tongmang = tongmang + a[z];
	}
	//cout << ",";
}
void timmangcon(int a[], int n)
{
	int lonnhat = 0;
	
	// for dau la diem bat dau
	// for thu 2 la diem ket thua
	// in gia tri thi in tu diem bat dau den ket thuc
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			int tongmang = 0;
			ingiatri(a, j,i,tongmang,1);
			if (tongmang > lonnhat)
			{
				lonnhat = tongmang;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			int tongmang = 0;
			ingiatri(a, j, i, tongmang,1);
			if (tongmang == lonnhat)
			{
				ingiatri(a, j, i, tongmang,2);
			}
		}
	}
	
}
int main()
{
	int n;
	int a[max];
	cout << "Nhap so luong phan tu mang: ";
	cin >> n;
	nhapmang(a, n);
	timmangcon(a, n);
	//xuatmang(a, m);
	return 0;
}