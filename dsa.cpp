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



//                                            SIMPlE SORTING AlGO
// #include <iostream>
// using namespace std;
// int main (){
// int arr [6]={4,2,5,0,7,3};
//   int temp;
//  for(int i=0; i<6; i++){
//   for (int j=i+1;j<6;j++){
//    if (arr[i]>arr[j]){
//     temp=arr[i];
//     arr[i]=arr[j];
//     arr[j]=temp;
  
//    }


//   }
//  }

//  for(int i =0;i<6;i++){
//   cout<<arr[i]<<" ";
//  }
// }




//                                               BUBBlE SORT 
// #include <iostream>
// using namespace std;
// int main(){
//   int n ;
//   cout<<"enter the number of ele in arr: ";
//   cin>>n;
//  int arr[n];
//  cout<<"enter the elements of arr: ";
//  for(int i =0;i<n;i++){
//   cin>>arr[i];
//  }
// for(int i =0; i<n-1;i++){
//   for(int j=0; j<n-i-1; j++){
//     if(arr[j]>arr[j+1]){
//       swap(arr[j],arr[j+1]);
//     }
//   }
// }
//  for (int i =0 ;i<n;i++){
// cout<< arr[i];
//  }
// }



//                                            INSERTION SORT
  

// *USING FOR lOOP*
// #include<iostream>
// using namespace std;
// int main(){
// int n; 
// cout<<"enter the number of elements: ";
// cin>>n;
// int arr[n];
// cout<<"enter the elements: ";
// for(int i=0;i<n;i++){
//   cin>>arr[i];
// }
// for(int i =1 ; i<n;i++){
//   int key =arr[i];
//   int j;
//   for( j =i-1 ; j>=0 && arr[j]>key;j-- ){
//     arr[j+1]=arr[j];
//   }
//      arr[j+1]=key;
// }
// for(int i =0; i<n;i++){
//   cout<<arr[i]<<" ";
// }
// return 0;
// }



//*USING WHIlE lOOP* 
// #include <iostream>
// typedef int aja;
// #define jbtk while 
// using namespace std;
// int main(){
//   int n;
//   cout<<"enter the number of elements: ";
//   cin>>n;
//   int arr[n];
//   cout <<"enter the elements: ";
//  for(int i=0; i<n;i++){
//   cin>>arr[i];
// }
//   for(int i=1;i<n;i++){
//   int key=arr[i];
//  int j =i-1;
//  jbtk(j>=0&&arr[j]>key){
//   arr[j+1]=arr[j];
//   j--;
//  }
//  arr[j+1]=key;
//  }
//  for(aja o =0; o<n;o++){
//   cout<<arr[o]<<" ";
//  }

// }

//                                 SElCTION SORT 

// #include<iostream>
// using namespace std;
// int main (){
//   int n;

//   cout<<"enter the number of ele: ";
//   cin>>n;

//   int arr[n];

//   cout<<"enter the ele: ";
//   for(int i=0; i<n;i++){
//     cin>>arr[i];
//   }

// for(int i =0; i<n-1; i++){
//   int minindex=i;
//   for(int j =i+1; j<n;j++){
//     if(arr[j]<arr[minindex]){
//  minindex=j;}
//   }
//   swap(arr[i],arr[minindex]);
// }

// for(int i=0; i<n; i++){
//   cout<<arr[i];
// }
// return 0;
// }




//                                             MERGE SORT 

// #include<iostream>
// using namespace std;
// void merge(int arr[],int start,int mid,int end){
//     int n1=mid-start+1;  
//     // int n1=mid+1;  
//     int n2= end-mid;  
//     // int n2= mid; 
//     int a[n1];
//     int b[n2];

// for(int i=0;i<n1;i++){
//     a[i]=arr[start+i];
// }

// for(int i=0;i<n2;i++ ){
//     b[i]=arr[mid+1+i];
// }
// int i=0;int j=0;int k=start;

// while(i<n1 && j<n2){
//     if(a[i]<b[j]){
//         arr[k]=a[i];
//         k++;
//         i++;
//     }
//     else{
//         arr[k]=b[j];
//         k++;
//         j++;

//     }
    
// }
// while(i<n1){
//     arr[k]=a[i];
//     k++;
//     i++;
// }
// while(j<n2){
//     arr[k]=b[j];
//     k++;
//     j++;

// }
// }
// void mergesort(int arr[],int start,int end){
// if(start<end)
// {
//     int mid=(start+end)/2;
//     mergesort(arr,start,mid);
//     mergesort(arr,mid+1,end);
//     merge(arr,start,mid,end);
// }}
// int main(){
//  int arr[]={5,4,3,2,1,0};
//  mergesort (arr,0,5);
//  for(int i=0;i<6;i++){
//     cout<<arr[i]<<" ";
//  }}



//                                               QUICK SORT 
#include <iostream>
using namespace std;
void swap(int arr[],int i , int j){
    // int temp=arr[i];
    // arr[i]=arr[j];
    // arr[j]=temp;
    swap(arr[i],arr[j]);
}
 int part(int arr[],int start,int end){
    int pivot=arr[end];
    int i=start-1;
    for(int j=start ; j<end;j++){
        if(arr[j]< pivot){
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,end);
    return i;
}
void quicksort(int arr[],int start, int end){
    if(start<end){
        int pi= part(arr,start,end);
        quicksort(arr,start,pi-1);
        quicksort(arr,pi+1,end);
    }
}
int main(){
    // int n;
    int arr[5]={0,5,6,52,7};
    quicksort(arr,0,4);
    for(int i=0;i<5;i++){
    cout<<arr[i]<<endl;
    }
}