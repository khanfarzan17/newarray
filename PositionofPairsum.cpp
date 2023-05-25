#include<iostream>
using namespace std;
int pairsum(int arr[],int n,int sum){
    for(int i=0;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if(arr[i]+arr[j]==sum){
                cout<<i<<" "<<j<<endl;
            }
        }
    }
}

int main(){
   
 int arr[]={8,7,2,5,3,1};
 int n=sizeof(arr)/sizeof(arr[0]);

   int sum=8;
 
 pairsum(arr,sum,n);

}