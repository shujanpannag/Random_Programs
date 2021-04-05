#include<iostream>
using namespace  std;

// void ls(int ar[], int k, int n){
//     for(int i =0; i<n;i++){
//         if(ar[k]>ar[i]){
//             cout<<"Key found: "<<i<<endl;
//             return;
//         }
//     }
//     cout<<"Key not found"<<endl;
// }

// void bs(int ar[], int l, int h, int k){
//     int mid = (l+h)/2;
//     if(ar[mid]==k){
//         cout<<"Key found: "<<mid<<endl;
//         return;
//     }
//     else if(ar[mid]>k){
//         bs(ar,l,mid-1,k);
//     }
//     else if(ar[mid]<k){
//         bs(ar,mid+1,h,k);
//     }
//     else{
//         cout<<"Key not found!!"<<endl;
//     }
// }

// int main(){
//     int a[] ={1,2,3,4,5};
//     bs(a,0,4,2);
//     return 0;
// }