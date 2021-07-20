#include<iostream>
using namespace std;

//****************** Giải thích ******************
// Nhập số nguyên dương N.
// Hàm output ta lấy giá trị %10 là giá trị cột đơn vị xuất ra xong cập nhật biến /10 sau đó lập lại.
//******************  Kết Thúc   ******************

void output(int n);

int main()
{
	unsigned int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "output: ";
	output(n);
	return 0;
}

void output(int n)
{
	while (n > 0)
	{
		cout << n % 10 << '\t';
		n = n / 10;
	}
}