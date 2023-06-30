#include<iostream>

using namespace std;

int main(){

    int array[1000];
    for(int i=0;i<sizeof(array)/sizeof(array[0]);i++){
        array[i]=1;
    }
    for(auto x:array){
        cout<<x;
    }
    return 0;
}
