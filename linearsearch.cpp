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


//  #include<iostream>
// using namespace std;
// int bs(int arr[],int n,int key){
// int s=0 ; int e=n;
// while(s<=e){
//     int mid =(s+e)/2;
//     if (arr[mid]==key){
//         return mid;
//     }
//     else if (arr[mid]>key){
//         e=mid-1;
//     }
//     else{
//         s=mid+1;
//     }
// }
// cout<<"no ele\n";
// return 0;
// }
// int main (){
//         int n;
//            cin>>n;

//            int arr[n];
//            for(int i = 0;i<n;i++){
//                cin>>arr[i];
//            }
//     int key;
//     cin>>key;
//     cout<<bs(arr,n,key)<<endl;
//     return 0;
// }

//                                ANOTHER VERSION "BINARY SEARCH" 

// #include <iostream>
// using namespace std;
// int main(){
//   system("cls");
// int e,mid,s;
// int arr[8]={1,3,3,5,7,9,19,29};
// s=0;
// e=8;
// mid = (s+e)/2;
// int key;
// cout<<"enter the key to be found: ";
// cin>>key;
// for(int i=s;i<e;i++){
// if (arr[mid] == key){
//   cout<<"key found in the mid";
//   // return key;
// }
// }
// if(key>arr[mid]){
//   for(int i =mid+1; i<e;i++){
//     if (arr[i]==key){
//       cout<<"key found\n";
//         cout<<"key "<<arr[i]<<"found at this pos:"<<i;
//           return 0;
//     }
//   }
// }
// if(key<arr[mid]){
//   for(int i=s;i<mid;i++){
//     if (arr[i]==key){
//        cout<<"key found\n";
//        cout<<"key "<<arr[i]<<"found at this pos:"<<i;
//            return 0;
//     }
//   }

// }

//   cout<<"key not found";



// }



//                                            SIMPLE SORTING ALGO
#include <iostream>
using namespace std;
int main (){
int arr [6]={4,2,5,0,7,3};
  int temp;
 for(int i=0; i<6; i++){
  for (int j=i+1;j<6;j++){
   if (arr[i]>arr[j]){
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
  
   }


  }
 }

 for(int i =0;i<6;i++){
  cout<<arr[i]<<" ";
 }
}