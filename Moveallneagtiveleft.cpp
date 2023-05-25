#include<bits/stdc++.h>

using namespace std;
void sort(int arr[],int n){
    sort(arr,arr+n);
}
void rearrange(int arr[],int n){
    int j=0;
    for(int i=0;i<=n;i++){
        if(i!=j && arr[i]<0){
            swap(arr[i],arr[j]);
        }
        j++;
    }
}
void display(int arr[],int n){
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={12,9,-1,-3,-6,0,1};
    int n=sizeof(arr)/sizeof(arr[0]);

    sort(arr,arr+n);
    rearrange(arr,n);
    display(arr,n);


}