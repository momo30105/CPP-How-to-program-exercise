#include<iostream>
using namespace std;

template<typename T>  //�ҪO typename�ϩҦ���ƫ��A���i�ϥ�
bool isEqualTo(const T &aa, const T &bb) {
	return aa == bb; //�^�ǭn�������̬O�_�ۦP(TRUE OR FALSE)
}

class complex {
	friend ostream &operator<<(ostream&, complex&);
public:
	complex(int realpart, int imaginarypart)
		:real(realpart), imaginary(imaginarypart) {  //real = realpart; imaginary = imaginarypart;
	}
	bool operator==(const complex &r) const {  //�B��l���� ��complex�]��ϥ�==
		return real == r.real&&imaginary == r.imaginary;
	}
private:
	int real;
	int imaginary;
};
ostream &operator<<(ostream &a, complex &b) {
	return a << b.real << "+" << b.imaginary << "i";	//�B��l���� ��complex�]��ϥ�cout<<
}

int main() {
	int a;
	int b;
	cout << "�п�J���int���ȡG" << endl;
	cin >> a >> b;
	cout << a << " �M " << b << (isEqualTo(a, b) ? " �ۦP" : " ���P") << endl; // ? :  if else

	double c;
	double d;
	cout << "�п�J���double���ȡG" << endl;
	cin >> c >> d;
	cout << c << " �M " << d << (isEqualTo(c, d) ? " �ۦP" : " ���P") << endl; // ? :  if else

	char q;
	char w;
	cout << "�п�J��Ӧr���G" << endl;
	cin >> q >> w;
	cout << q << " �M " << w << (isEqualTo(q, w) ? " �ۦP" : " ���P") << endl; // ? :  if else	

	complex x(8, 7),y(8,7);
	cout << x << " �M " << y << (isEqualTo(x, y) ? " �ۦP" : " ���P") << endl; // ? :  if else

	system("pause");
}