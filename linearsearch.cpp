#include <iostream>
using namespace std;
int main(){
    int a ;
    cout<<"enter a number to search in array : ";
    cin>>a;
    int arr[5]={2,4,5,6,8};
    for(int i=0; i<5;i++){
        if(arr[i]==a){
            cout<<"key found :";
            cout<<arr[i];
          return 0;
        } 
    }
    
            cout<<"key not found";
       return 0;
}