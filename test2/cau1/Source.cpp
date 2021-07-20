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
bool kt_chanle(int a)
{
	if (a % 2 == 0)
	{
		return true;
	}
	return false;
}
void xulymang(int a[], int n,int dieukien,int c[],int &z)
{
	// lay thong so chan gan cho mang c
	if (dieukien == 1)
	{
		for (int i = 0; i < n; i++)
		{
			if (kt_chanle(a[i]) == true)
			{
				c[z] = a[i];
				z++;
			}
		}
	}
	//lay phan tu le gan cho man
	if (dieukien == 2)
	{
		for (int i = 0; i < n; i++)
		{
			if (kt_chanle(a[i]) == false)
			{
				c[z] = a[i];
				z++;
			}
		}
	}	
}

int main()
{
	int n,m,z=0;
	int a[max],b[max],c[max];
	cout << "Nhap so luong phan tu mang: ";
	cin >> n;
	nhapmang(a, n);
	cout << "Nhap so luong phan tu mang: ";
	cin >> m;
	nhapmang(b, m);
	// chọn phần tử chẳn 
	xulymang(a, n, 1, c, z);
	xulymang(b, m, 1, c, z);
	// Chọn phần tử lẻ
	xulymang(a, n, 2, c, z);
	xulymang(b, m, 2, c, z);
	// Xuất mảng
	xuatmang(c,z);
	return 0;
}