#include<iostream>
using namespace std;

void swap(int* a, int* b)  
{  
    int t = *a;  
    *a = *b;  
    *b = t;  
}

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
	int g;
	for(int i=0;i<n;i++){
		g = i;
		for(int j=i;j<n;j++){
			if(ar[g]>ar[j]){
				g = j;
			}
		}
		swap(ar[g],ar[i]);
	}
}

void is(int ar[], int n, int k){
	if(k<n){
		for(int i=0;i<k;i++){
			if(ar[i]>ar[k]){
			swap(ar[i],ar[k]);
			}
		}
	}else{
		return;
	}
	is(ar,n,k+1);
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
    bs(b,size);
    for(int i= 0;i<6;i++){
        cout<<b[i]<<" ";
    }
	cout<<endl;
    
	int c[] = {10,4,19,2,6,1};
    ss(c,size);
    for(int i= 0;i<6;i++){
        cout<<c[i]<<" ";
    }
	cout<<endl;
}