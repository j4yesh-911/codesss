// #include <iostream>
// using namespace std;
// int main(){
//     int a ;
//     cout<<"enter a number to search in array : ";
//     cin>>a;
//     int arr[5]={2,4,5,6,8};
//     for(int i=0; i<5;i++){
//         if(arr[i]==a){
//             cout<<"key found :";
//             cout<<arr[i];
//           return 0;
//         } 
//     }
    
//             cout<<"key not found";
//        return 0;
// }
//                                             BINARY SEARCH


 #include<iostream>
using namespace std;
int bs(int arr[],int n,int key){
int s=0 ; int e=n;
while(s<=e){
    int mid =(s+e)/2;
    if (arr[mid]==key){
        return mid;
    }
    else if (arr[mid]>key){
        e=mid-1;
    }
    else{
        s=mid+1;
    }
}
cout<<"no ele\n";
return 0;
}
int main (){
        int n;
           cin>>n;

           int arr[n];
           for(int i = 0;i<n;i++){
               cin>>arr[i];
           }
    int key;
    cin>>key;
    cout<<bs(arr,n,key)<<endl;
    return 0;
}