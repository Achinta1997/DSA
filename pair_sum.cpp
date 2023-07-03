#include<bits/stdc++.h>

using namespace std;

bool pairSum(int arr[],int n,int key){
    sort(arr,arr+n);
    int l=0, r=n-1;
    while(l<r){
        if(key==arr[l]+arr[r]){
            return true;
        }else{
            if(key<arr[l]+arr[r]){
                r--;
            }else{
                l++;
            }
        }
        
    }
    return false;
   
}

int main(){

    int n=8;
    int arr[n]={10,20,7,12,8,3,11,21};

    int key;
    cout<<"Enter a key to check pair sum : ";
    cin>>key;

    bool pairSumStatus= pairSum(arr,n,key);
    if(pairSumStatus){
        cout<<"Pair sum exists.";
    }else{
        cout<<"Pair sum doesn't exists";
    }
    return 0;
}
