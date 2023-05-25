#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }

    int odd_count=0;
    int even_count=0;
    for(int i=1;i<=n;i++){
        if(arr[i]%2==0){
            even_count++;
        }
        else{
            odd_count++;
        }
    }
    
    cout<<even_count<<" "<<endl;
    cout<<odd_count<<" "<<endl;
    
}