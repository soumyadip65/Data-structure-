#include<iostream>
using namespace std;
void swapp(int *x,int *y){
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
}

int main(){
    int x=5,y=6;
    swapp(&x,&y);
    cout<<x<<" "<<y;
}