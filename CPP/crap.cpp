#include<iostream>

void swap(int &a, int &b){
    int t;
    t = a;
    a = b;
    b = t;
}

int main(){
    int a=1,b=2;
    swap(a,b);
    printf("%d %d", a,b);
    return 0;
}