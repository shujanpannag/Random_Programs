#include <iostream>
using namespace std;

void bs(int ar[], int l, int h){
	for(int i=l;i<h;i++){
		for(int j=l;j<h-i;j++){
			if(ar[j]>ar[j+1]){
				swap(ar[j], ar[j+1]);
			}
		}
	}
}

// void is(int ar[], int l, int h, int k){
// 	if(k<h){
// 		for(int i=l;i<k;i++){
// 			if(ar[i]>ar[k]){
// 			swap(ar[i],ar[k]);
// 			}
// 		}
// 	}else{
// 		return;
// 	}
// 	is(ar,l,h,k+1);
// }

void ms(int ar[], int low, int high){
    int mid = (low+high)/2;
    if(high-low != 0){
        ms(ar,low,mid);
        ms(ar,mid+1,high);
        for(int i= low;i<high+1;i++){
            cout<<ar[i]<<" ";
        }
        cout<<endl;
        bs(ar,low,high);
        for(int i= low;i<high+1;i++){
            cout<<ar[i]<<" ";
        }
        cout<<endl;
    }
    else{
        return;
    }
}

int main(){
    int a[] ={1,25,6,5};
    ms(a,0,3);
    return 0;
}