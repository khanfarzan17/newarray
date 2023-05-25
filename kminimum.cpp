#include<iostream>
#include<algorithm>
using namespace std;
int kminimum(int arr[],int n,int k){
sort(arr,arr+n);
return arr[k-1];
}
int main(){
    int n;
    cin>>n;
    int k=3;
    int arr[n];
    for(int i=1;i<n;i++){
        cin>>arr[i];
    }
    cout<<"kth minimum element "<<kminimum(arr,n,k);
}