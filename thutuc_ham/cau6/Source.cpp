#include<iostream>
using namespace std;

//****************** Giải thích ******************
// Nhập số nguyên dương N.
// Hàm xuat_uoc (Nếu n chia i(i là số chạy từ [1,n]) mà phần dư =0 ==> đó là ước số).
// Hàm xuat_gia_tri_tong_uoc mỗi lần kiểm tra ước có giá trị thì lấy nó cộng lại
//******************  Kết Thúc   ******************

int xuat_gia_tri_tong_uoc(int n);
int xuat_uoc(int n, int i);

int main()
{
	unsigned int n;
	cout << "Nhap n: ";
	cin >> n;
	int kq=xuat_gia_tri_tong_uoc(n);
	cout << "Tong gia tri cua uoc: "<< kq;
	return 0;
}

int xuat_gia_tri_tong_uoc(int n)
{
	int kq = 0;
	for (int i = 1; i <= n; i++)
	{
		kq = kq + xuat_uoc(n,i);
	}
	return kq;

}

int xuat_uoc(int n,int i)
{
	if (n % i == 0)
	{
		return n;
	}
	else
		return 0;
}

