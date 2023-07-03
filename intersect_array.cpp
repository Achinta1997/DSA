#include <iostream>

using namespace std;

void intersectArray(int arr1[],int arr2[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr1[i]==arr2[j])
            cout<<arr1[i]<<" ";
        }
    }
}

int main()
{
    int n=8;
    int arr1[n]={20,10,9,3,100,7,1,2};
    int arr2[n]={30,10,100,3,90,2,108,8};
    
    intersectArray(arr1,arr2,n);

    return 0;
}
