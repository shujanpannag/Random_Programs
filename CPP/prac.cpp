#include<iostream>
#include<string>
using namespace std;

struct name{
    int data;
    string name;
};

inline bool operator == (const name &a, const name &b){
    return a.data == b.data && a.name == b.name;
}

class pass{
    string name;
    int id;
    bool new_user;
public:
    pass(){new_user = false;}
    pass(string n, int i, bool state = true):name(n), id(i){
        new_user = state;
    }
    bool is_new() const{return new_user;}
};

class complex{
public:
    int a, b;
public:
    complex(int x, int y):a(x),b(y){};
    bool operator ==(const complex &y){
        return a == y.a && b == y.b;
    }
};

bool operator ==(const complex &x, const complex &y){
    return x.a == y.a && x.b == y.b;
}

int main(){
    name m = {7, "Shujan"};
    name n = {7, "Shujan"};
    cout<<(m==n)<<endl;;

    pass p("Shujan", 13579);
    cout<<p.is_new()<<endl;

    string s = "Hello World";
    cout<<s.find('l',5)<<endl;
    cout<<s.erase(1,6);
    return EXIT_SUCCESS;
}