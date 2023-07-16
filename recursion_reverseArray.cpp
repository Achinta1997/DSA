#include<bits/stdc++.h>

using namespace std;

void reverse(int a[],int start,int n){
    if(start>=n/2){
        return;
    }
    swap(a[start],a[n-start-1]);
    reverse(a,start+1,n);

}

int main(){

    int a[]={2,9,4,10,31};
    int n= sizeof(a)/sizeof(int);
    
    reverse(a,0,n);

    for(auto x:a){
        cout<<x<<" ";
    }
    return 0;
}
