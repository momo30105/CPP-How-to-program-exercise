#include<iostream>
using namespace std;

template<typename T>  //模板 typename使所有資料型態都可使用
bool isEqualTo(const T &aa, const T &bb) {
	return aa == bb; //回傳要比較的兩者是否相同(TRUE OR FALSE)
}

class complex {
	friend ostream &operator<<(ostream&, complex&);
public:
	complex(int realpart, int imaginarypart)
		:real(realpart), imaginary(imaginarypart) {  //real = realpart; imaginary = imaginarypart;
	}
	bool operator==(const complex &r) const {  //運算子重載 讓complex也能使用==
		return real == r.real&&imaginary == r.imaginary;
	}
private:
	int real;
	int imaginary;
};
ostream &operator<<(ostream &a, complex &b) {
	return a << b.real << "+" << b.imaginary << "i";	//運算子重載 讓complex也能使用cout<<
}

int main() {
	int a;
	int b;
	cout << "請輸入兩個int的值：" << endl;
	cin >> a >> b;
	cout << a << " 和 " << b << (isEqualTo(a, b) ? " 相同" : " 不同") << endl; // ? :  if else

	double c;
	double d;
	cout << "請輸入兩個double的值：" << endl;
	cin >> c >> d;
	cout << c << " 和 " << d << (isEqualTo(c, d) ? " 相同" : " 不同") << endl; // ? :  if else

	char q;
	char w;
	cout << "請輸入兩個字元：" << endl;
	cin >> q >> w;
	cout << q << " 和 " << w << (isEqualTo(q, w) ? " 相同" : " 不同") << endl; // ? :  if else	

	complex x(8, 7),y(8,7);
	cout << x << " 和 " << y << (isEqualTo(x, y) ? " 相同" : " 不同") << endl; // ? :  if else

	system("pause");
}