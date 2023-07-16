#include<bits/stdc++.h>

using namespace std;

bool checkPelindrome(string str,int i,int n){
    if(i>=n/2) return true;

    if(str[i]!=str[n-i-1]) return false;

    checkPelindrome(str,i+1,n);
}

int main(){

    string str="SAAS";
    int n= str.length();
    
    bool result= checkPelindrome(str,0,n);

    if(result){
        cout<<"Pelindrome string";
    }else{
        cout<<"Non Pelindrome string";
    }
    return 0;
}
