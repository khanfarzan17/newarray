#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<=n;i++){
        cin>>arr[i];

    }

    int start=0;
    int end=n;
    while(end>=start){
        int swap=arr[start];
        arr[start]=arr[end];
        arr[end]=swap;
        start++;
        end--;
    }
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }

}