// #include <iostream>
// using namespace std;
// int pivo(int arr [],int start, int end){
// int piv = arr[end];
// int i=start-1;
// for(int j =start; j<end;j++){
//   if(arr[j]<piv){
//       i++;
//  swap(arr[i],arr[j]);
//       }
//   }

//  swap(arr [i+1], arr[end]);
//   return i+1;


// }
// void quicksort(int arr[], int start, int end){
//   if(start<end){
// int piv= pivo(arr,start,end);
//   quicksort(arr, start , piv-1);
//   quicksort(arr,piv+1,end);
//   }
// }
// int main(){
//   int arr[5]={5,4,3,2,1};
//   quicksort(arr,0,4);
//   for (int i =0; i<5;i++){
//     cout<<arr[i];
//   }
// }
