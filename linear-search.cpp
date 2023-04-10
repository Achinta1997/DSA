#include<iostream>

using namespace std;

int main(){
    int arr[7];

    //taking input from user
    for (int i = 0; i < 7; i++)
    {
        cout<<i<<" input :";
        cin>>arr[i];
    }

    int num;
    cout<<"Number to serach :";
    cin>>num;

//liner serach function
    for (int i = 0; i < 7; i++)
    {
        if (num==arr[i])
        {
            cout<<"Found "<<arr[i];
            return 0;
        }
         
    }
    cout<<"Not found";
    
    return 0;
}
