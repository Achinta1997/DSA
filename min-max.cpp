#include<iostream>

using namespace std;

//max function
int maxNum(int arr[],int size){
    int max= INT16_MIN;
    for(int i=0;i<size;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}

//min function
int minNum(int arr[],int size){
    int min= INT16_MAX;
    for(int i=0;i<size;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    return min;
}

//user choice
void userChoice(int user_choice,int arr[]){

    int max,min;
    switch (user_choice)
    {
    case 1:
        max=maxNum(arr,5);
    cout<<"max is "<<max;
        break;

        case 2:
        min=minNum(arr,5);
    cout<<"min is "<<min;
        break;
    
    default:
    cout<<"Try again with a valid input.";
        break;
    }
}

int main(){

    //taking input in array
    int arr[5];
    int size=5;
      cout<<"Take 5 numbers : ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    //Calling user choice
    cout<<"1 for max ,2 for min ";
    int user_choice;
    cin>>user_choice;
    userChoice(user_choice,arr);

    return 0;
}
