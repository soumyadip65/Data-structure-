#include<iostream>
using namespace std;

int main(){
    int arr[10]={3,4,5,9,1,2};
    int size=10,last=0;
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            last-=1;
            break;
        }
        last++;
    }

    int target,element;
    cin>>target>>element;
    for(int i=last+1;i>last-target+1;i--){
        arr[i]=arr[i-1];

    }

    arr[target]=element;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}