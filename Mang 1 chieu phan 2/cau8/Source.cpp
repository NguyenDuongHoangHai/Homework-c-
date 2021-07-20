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
void ingiatri(int a[], int z,int i)
{
	for (int j = i; j <= z; j++)
	{
		cout << a[j] << "\t";
	}
}
bool kiemtratangdan(int a[], int z, int i)
{
	for (int j = i; j <= z-1; j++)
	{
		if (a[j] > a[j + 1])
		{
			return false;
		}
	}
	return true;
}
void thuattoan(int a[], int n)
{
	
	bool kt = true;
	for (int i = 0; i < n; i++)
	{
		for (int z = i; z < n; z++)
		{
			if (kiemtratangdan(a, z, i) == true)
			{
				ingiatri(a, z, i);
				cout << ", ";
			}
			else
			{
				break;
			}
		}

	}
}
int main()
{
	int n, m = 0;
	int a[max];
	cout << "Nhap so luong phan tu mang: ";
	cin >> n;
	nhapmang(a, n);
	xuatmang(a, n);
	thuattoan(a, n);
	return 0;
}