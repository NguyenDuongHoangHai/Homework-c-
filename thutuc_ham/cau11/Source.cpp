#include<iostream>
using namespace std;
#include<math.h>

//****************** Giải thích ******************
// Nhập số nguyên dương N.
// kiểm tra n có bao nhiêu chữ số tương ứng số mũ mà biểu thức có
// sau đó xuất giá trị sau đó mũ với số mũ tương ứng và xuất kết quả
//******************  Kết Thúc   ******************

int dem_so_k(int n);
void tinh_toan(int n, int k);

int main()
{
	unsigned int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "output: ";
	int tam = dem_so_k(n);
	tinh_toan(n,tam);
	return 0;
}

int dem_so_k(int n)
{
	int tam=0;
	while (n > 0)
	{
		tam++;
		n /= 10;
	}
	return tam;
}

void tinh_toan(int n,int tam)
{
	int kq=0,sobandau=n;
	for (int i = 1; i <= tam; i++)
	{
		kq = kq + pow((n % 10),tam);
		n /= 10;
	}
	if (sobandau == kq)
	{
		cout << "day la so Amstrong";
	}
	else
	{
		cout << "Day khong phai so asmtrong";
	}
	
}