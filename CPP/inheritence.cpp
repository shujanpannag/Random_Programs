#include<iostream>
using namespace std;

class base{
	int a;
public:
	friend void fun(base &, int);
};

// class b1: virtual public base{};
// class b2: virtual public base{};

// class d:public b1, public b2{};

// int main(){
// 	cout<<sizeof(base)<<endl;
// 	cout<<sizeof(b1)<<endl;
// 	cout<<sizeof(b2)<<endl;
// 	cout<<sizeof(d)<<endl;
// 	return 0;
// }

void fun(base &x, int val){
	x.a = val;
	cout<<x.a<<endl;
}

int main(){
	base b;
	fun(b,30);
	return 0;
}