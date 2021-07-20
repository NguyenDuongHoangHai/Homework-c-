#include<iostream>
using namespace std;

//****************** Giải thích ******************
// Nhập số nguyên dương N. Công thức S(n)= 1^2 + 2^2 + 3^2 ... + n^2.
// Do tính tổng mũ 2 từ 1 đến n nên ta sẽ tính tổng mũ 2 đoạn [1,n]
//******************  Kết Thúc   ******************

int tinh_mu_2(int n);
int main()
{
	unsigned int n;
	cout << "Nhap so n: ";
	cin >> n;
	int kq = tinh_mu_2(n);
	cout << "Ket qua phep tinh: " << kq;
	return 0;
}

int tinh_mu_2(int n)
{
	int kq = 0;
	for (int i = 1; i <= n; i++)
	{
		kq = kq + i * i;
	}
	return kq;
}