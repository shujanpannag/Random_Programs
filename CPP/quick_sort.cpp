#include <iostream>
using namespace std;

void qs(int ar[],int low, int high) {
    int p = low, l = low, r = high;
    if(low<high){
        while(l<r){
            if(p == l){
                if(ar[p]>ar[r]){
                    swap(ar[p], ar[r]);
                    p = r;
                }else{
                    r -= 1;
                }
            }
            if(p == r){
                if(ar[p]<ar[l]){
                    swap(ar[p], ar[l]);
                    p = l;
                }else{
                    l += 1;
                }
            }
        }
    }else{
        return;
    }
    qs(ar,low,p-1);
    qs(ar,p+1,high);
}

int main(){
    int a[] = {10,4,19,2,6,1};
    int size = sizeof(a)/sizeof(int);
    qs(a,0,size-1);

    for(int i= 0;i<6;i++){
        cout<<a[i]<<endl;
    }
}