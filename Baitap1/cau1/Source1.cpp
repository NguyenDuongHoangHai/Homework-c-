#include<iostream>;
using namespace std;
//int main ()
int main()
{
	//Khởi tạo 2 biến a, b kiểu int có 4 byte 
	int a, b;
	//In ra màng hình nhập số thứ 1
	cout << "Nhap so thu 1: ";
	//Nhập số và lưu vào biến a
	cin >> a;
	//In ra màng hình nhập số thứ 1
	cout << "Nhap so thu 2: ";
	//Nhập số và lưu vào biến b
	cin >> b;
	// a so sánh với b sau do in ra dòng chữ số lớn nhất và bien611 tương ứng
	a < b ? cout << "So lon nhat la : " << b : cout << "So lon nhat la : " << a;
	//cout << "So lon nhat la: " << a < b ? 
}