#include <iostream>
using namespace std;
#include <string>
//****************** Giải thích ******************
// Phần 1 : Phần đăng nhập tài khoản và mật khẩu 
//	- Sai mật khẩu thì nhập lại
//	- Quá 3 lần thì không cho nhập nữa
// * Phần phụ nhập thông số tờ tiền cho ATM
// Phần 2 : Lựa chọn chức năng của máy ATM 
//	- Chức năng rút tiền trong tài khoản
//		+ Rút xong có thể rút tiếp hoặc kết thúc
//	- Chức năng xả hết tiền máy ATM hiện có
//		+ Xong thì kết thúc trở lại màn hình đăng nhập
//	- Kết thức thì trở lại nhập mật khẩu
//	*Nếu ATM hết tiền thì báo máy lỗi 
//	Phần 3 : Phần thuật toán cho ATM ( số tờ nhỏ nhất )
//******************  Kết Thúc   ******************

bool kiemtra_matkhau(string& A, string& B ,int& tam);
void nhap_giatribandau(int giaidoan, int& a, int& b, int& c, int& d, int& n);
int nhap_chucnang(int giaidoan);
int thuattoan_ruttien(int& cout_500, int& cout_200, int& cout_100, int& cout_50, int n);
int main()
{
	string A, B;
	int tam = 0;
	int a, b, c, d, n; 
	int giaidoan = 1;
	bool cohieu = kiemtra_matkhau(A, B, tam);
	if (cohieu == true)
	{
		nhap_giatribandau(giaidoan, a, b, c, d, n);
	}
	else if(cohieu == false)
	{
		return 0;
	}
	int x = nhap_chucnang(giaidoan);
	giaidoan = 2;
	if (x == 1 )
	{
		nhap_giatribandau(giaidoan,a,b,c,d,n);
		thuattoan_ruttien(a,b,c,d,n);
	}
	else if (x == 2)
	{
		bool y = nhap_chucnang(giaidoan);
	}

}

bool kiemtra_matkhau(string& A, string& B, int& tam)
{
	do
	{
		cout << "Tai khoan: ";
		cin >> A;
		cout << "Mat khau: ";
		cin >> B;
		tam++;
		if (tam == 3)
		{
			return false;
		}
	} while (!(A == "Hoanghai" and B == "123456"));
	return true;
}

void nhap_giatribandau(int giaidoan, int& a, int& b, int& c, int& d, int&n )
{
	if (giaidoan == 1)
	{
		cout << "\nNhap so to 500: ";
		cin >> a;
		cout << "\nNhap so to 200: ";
		cin >> b;
		cout << "\nNhap so to 100: ";
		cin >> c;
		cout << "\nNhap so to 50: ";
		cin >> d;
	}
	else if (giaidoan == 2)
	{
		cout << "\nNhap so tien can rut: ";
		cin >> n;
	}	
}

int thuattoan_ruttien(int& a, int& b, int& c, int& d, int n)
{
	int cout_500 = 0 , cout_200 = 0, cout_100 = 0, cout_50 = 0;
	if (n / 500000 != 0 and a != 0)
	{
		if ((n / 500000) < a)
		{
			cout_500 = n / 500000;
			n = n % 500000;
		}
		else
		{
			cout_500 = a;
			n = n - (a * 500000);
		}	
	}
	if (n / 200000 != 0 and b != 0)
	{
		if ((n / 200000) < a)
		{
			cout_200 = n / 200000;
			n = n % 200000;
		}
		else
		{
			cout_200 = b;
			n = n - (b * 200000);
		}
	}
	if (n / 100000 != 0 and c != 0)
	{
		if ((n / 100000) < c)
		{
			cout_100 = n / 100000;
			n = n % 100000;
		}
		else
		{
			cout_100 = c;
			n = n - (c * 100000);
		}
	}
	if (n / 50000 != 0 and d != 0)
	{
		if ((n / 50000 )< d)
		{
			cout_50 = n / 50000;
			n = n % 50000;
		}
		else
		{
			cout_50 = d;
			n = n - (d * 50000);
		}
	}
	cout << "cout_500 da rut: " << cout_500 << endl;
	cout << "cout_200 da rut: " << cout_200 << endl;
	cout << "cout_100 da rut: " << cout_100 << endl;
	cout << "cout_50 da rut: " << cout_50 << endl;
	cout << "So to 500 con lai: " << a << endl;
	cout << "So to 200 con lai: " << b << endl;
	cout << "So to 100 con lai: " << c << endl;
	cout << "So to 50 con lai: " << d << endl;
	return 0;
}

int nhap_chucnang(int giaidoan)
{
	int x, y;
	if (giaidoan == 1)
	{
		cout << "1. Rut tien tu tai khoang" << endl;
		cout << "2. Chuc nang khac" << endl;
		do
		{
			cout << "Nhap so thu tu chuc nang tuong ung: ";
			cin >> x;
		} while (!(x == 1 || x == 2));
		return x;
	}
	else
	{
		cout << "1. Rut het tien" << endl;
		cout << "2. Ket thuc chuong trinh" << endl;
		do
		{
			cout << "Nhap so thu tu chuc nang tuong ung: ";
			cin >> y;
		} while (!(y == 1 || y == 2));
		return y;
	}
}


