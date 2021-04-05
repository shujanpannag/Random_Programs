#include<iostream>
using namespace std;

template<typename T>
T fun(T x, T y){
	cout<<x<<" "<<y<<endl;
	return 0;
}

int main(){
	fun<int>(10,5);
	return 0;
}