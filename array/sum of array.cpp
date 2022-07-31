#include<iostream>
using namespace std;

int main(){
    int arr[]={3,4,2,1,7,5};
    int sum=0,size=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<size;i++){
        sum+=arr[i];
        arr[i]=sum;
        cout<<arr[i]<<" ";
    }
   
}