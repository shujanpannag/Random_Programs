#include<iostream>
using namespace std;

void bs(int ar[], int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++){
			if(ar[j]>ar[j+1]){
				swap(ar[j], ar[j+1]);
			}
		}
	}
}

void ss(int ar[], int n){
	int l;
	for(int i=0;i<n;i++){
		l = i;
		for(int j=i;j<n;j++){
			if(ar[l]>ar[j]){
				l = j;
			}
		}
		swap(ar[l],ar[i]);
	}
}

void is(int ar[], int n, int k){
	if(k<n){
		for(int i=0;i<k;i++){
			if(ar[i]>ar[k]){
			swap(ar[i],ar[k]);
			}
		}
	}
	if(k+1<n){
	is(ar,n,k+1);
	}
}

int main(){
    int a[] = {10,4,19,2,6,1};
    int size = sizeof(a)/sizeof(int);
    is(a,size,1);
    for(int i= 0;i<6;i++){
        cout<<a[i]<<" ";
    }
	cout<<endl;

    int b[] = {10,4,19,2,6,1};
    size = sizeof(b)/sizeof(int);
    bs(b,size);
    for(int i= 0;i<6;i++){
        cout<<b[i]<<" ";
    }
	cout<<endl;

	int c[] = {10,4,19,2,6,1};
    size = sizeof(c)/sizeof(int);
	ss(c,size);
    for(int i= 0;i<6;i++){
        cout<<c[i]<<" ";
    }
	cout<<endl;

	return 0;
}
