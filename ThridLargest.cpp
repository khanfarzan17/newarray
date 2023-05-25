#include<iostream>
using namespace std;
int thirdlargest(int arr[],int n){
    if(n<3){
        cout<<" the array doest not have enough elements";
        return 0;
    }
    int first=arr[0];
    int second=INT8_MIN;
    int third=INT8_MIN;
    for(int i=0;i<=n;i++){
        if(arr[i]>first){
            third=second;
            second=first;
            first=arr[i];
        }
        else if(arr[i]>second){
            third=second;
            second=arr[i];
        }
        else if(arr[i]>third){

        
            third=arr[i];
        }
    }

    cout<<third<<" ";
    }
int main(){
    int arr[]={12,45,89,90,21};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<" Third lasrgest "<<thirdlargest(arr,n);
}