#include<iostream>;
 using namespace std;

long cong(long a, long b) {
	return a+b;
}
long tru(int a, int b) {
	return a-b;
}
long nhan(long a, long b) {
	return a*b;
}
long chia(long a,long b){
	cout << a << "÷" << b << "=";
	if (a%b != 0) {
		cout << a/b << " du ";
		return a%b;
	}
	else return a/b;
}

int main() {
	long a,b;
	cout << " nhap a: "; cin >> a;
	cout << " nhap b: "; cin >> b;
	cout << a << "+" << b << "=" << cong(a,b) << "\n";
	cout << a << "-" << b << "=" << tru(a,b) << "\n";
	cout << a << "×" << b << "=" << nhan(a,b) << "\n";
	cout << chia(a,b);
	
	return 0;
}
