#include<iostream>
using namespace std;
int main(){
    int arr[]={12,34,56,78,90};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    int largest=INT8_MIN;
    int secondlargest=INT8_MIN;

    for(int i=0;i<=n;i++){
        if(arr[i]>largest){
            secondlargest=largest;
            largest=arr[i];
        }
        else if(arr[i]>secondlargest && arr[i]<largest){
            secondlargest=arr[i];
        }
    }
    cout<<largest<<" "<<secondlargest;
}