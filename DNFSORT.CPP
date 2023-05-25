#include<bits/stdc++.h>
using namespace std;
int swap(int arr[],int i,int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
int dnf(int arr[],int n){
    int low=0;
    int mid=0;
    int high=n-1;
    while(high>=mid){
        if(arr[mid]==0){
            swap(arr,mid,low);
                mid++;
                low++;
        }
            else if(arr[mid]==1){
                mid++;
            }
            else{
                swap(arr,high,mid);
                high--;
            }
        }
    }

int main(){
    int arr[]={1,2,0,1,0,0};
    dnf(arr,6);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }

}