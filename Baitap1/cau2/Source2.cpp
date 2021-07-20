#include<iostream>;
using namespace std;
int main()
{
	//Khởi tạo 2 biến a, b kiểu int có 4 byte 
	float a, b;
	
	cout << "Nhap so thu 1: ";//In ra màng hình nhập số thứ 1
	cin >> a;//In ra màng hình nhập số thứ 2
	cout << "Nhap so thu 2: ";	//In ra màng hình nhập số thứ 2
	cin >> b;	//Nhập số 2 và lưu vào biến b
	a < b ? a = b : a;	// a so sánh với b sau đó nếu a < b thì gán a cho b nếu không a giữ nguyên
	cout << "Nhap so thu 3: ";
	cin >> b;	//Nhập số 3 và lưu vào biến b
	a < b ? a = b : a;	//a so sánh với b sau đó nếu a < b thì gán a cho b nếu không a giữ nguyên
	cout << "Nhap so thu 4: ";	//In ra màng hình nhập số thứ 4
	cin >> b;	//Nhập số 4 và lưu vào biến
	a < b ? a = b : a;	//a so sánh với b sau đó nếu a < b thì gán a cho b nếu không a giữ nguyên
	cout << "So lon nhat la: " << a;	// in ra số lớn nhất
}