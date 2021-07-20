#include<iostream>
using namespace std;

//****************** Giải thích ******************
// Nhập số nguyên dương N.
// Hàm dat_linh_canh ta lấy giá trị %10 là giá trị cột đơn vị xuất ra xong cập nhật biến /10 sau đó lập lại.
// Lấy giá trị sau mỗi lần xuất giá trị so sánh vs biến kq ban đầu xem lớn hơn thì cập nhật 
//******************  Kết Thúc   ******************

int dat_linh_canh(int n);

int main()
{
	unsigned int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "output: ";
	int kq = dat_linh_canh(n);
	cout << kq;
	return 0;
}

int dat_linh_canh(int n)
{
	int kq = 0;
	while (n > 0)
	{
		if (n % 10 > kq)
		{
			kq = n % 10;
		}
		n = n / 10;
	}
	return kq;
}