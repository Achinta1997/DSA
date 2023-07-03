#include <iostream>

using namespace std;

bool duplicateNum(int arr[],int n,int key){
    int temp=0;
    for(int i=0;i<n;i++){
        if(key==arr[i])
        temp++;
    }
    if(temp>1){
        return true;
    }else
    return false;
}


int main()
{
    int n=9;
    int arr[n]={20,10,8,2,40,8,20,10,2,4};
    
    int key;
    cout<<"provide a key : ";
    cin>>key;
    bool duplicate= duplicateNum(arr,n,key);
    if(duplicate){
        cout<<"duplicate number";
    }else{
        cout<<"not duplicate";
    }

    return 0;
}
