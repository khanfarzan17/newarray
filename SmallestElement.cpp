#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    int smallestelement=INT8_MAX;

    for(int i=1;i<=n;i++){
        if(arr[i]<smallestelement){
            smallestelement=arr[i];
        }
    }
    cout<<smallestelement<<" ";

}