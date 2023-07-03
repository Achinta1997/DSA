#include <iostream>

using namespace std;

bool uniqueNum(int arr[],int n,int key){
    int temp=0;
    for(int i=0;i<n;i++){
        if(key==arr[i])
        temp++;
    }
    if(temp>1){
        return false;
    }else
    return true;
}


int main()
{
    int n=9;
    int arr[n]={20,10,8,2,40,8,20,10,2,4};
    
    int key;
    cout<<"provide a key : ";
    cin>>key;
    bool unique= uniqueNum(arr,n,key);
    if(unique){
        cout<<"unique number";
    }else{
        cout<<"not unique";
    }

    return 0;
}
