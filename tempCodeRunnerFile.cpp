#include<bits/stdc++.h>

using namespace std;

int fibernacci(int n){
    if(n<=1)
        return n;

    int last= n-1;
    int slast= n-2;

    return last+slast;
}    
int main(){

    int n;
    cin>>n;

    int res = fibernacci(n);
    cout<<res;
    return 0;
}
