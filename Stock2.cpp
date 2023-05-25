#include<iostream>
using namespace std;
int main(){
    int arr[]={2,30,15,10,8,25,80};
    int n=sizeof(arr)/sizeof(arr[0]);
    int profit=0;
    for(int i=1;i<=n;i++){
        if(arr[i]>arr[i-1]){
        profit=profit+(arr[i]-arr[i-1]);
        }
    }
    cout<<profit<<endl;
}
