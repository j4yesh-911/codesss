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

//                                ANOTHER VERSION "SEARCHING" 

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
// #include <iostream>
// using namespace std;
// void swap(int arr[],int i , int j){
//     // int temp=arr[i];
//     // arr[i]=arr[j];
//     // arr[j]=temp;
//     swap(arr[i],arr[j]);
// }
//  int part(int arr[],int start,int end){
//     int pivot=arr[end];
//     int i=start-1;
//     for(int j=start ; j<end;j++){
//         if(arr[j]< pivot){
//             i++;
//             swap(arr,i,j);
//         }
//     }
//     swap(arr,i+1,end);
//     return i;
// }
// void quicksort(int arr[],int start, int end){
//     if(start<end){
//         int pi= part(arr,start,end);
//         quicksort(arr,start,pi-1);
//         quicksort(arr,pi+1,end);
//     }
// }
// int main(){
//     // int n;
//     int arr[5]={0,5,6,52,7};
//     quicksort(arr,0,4);
//     for(int i=0;i<5;i++){
//     cout<<arr[i]<<endl;
//     }
// }


//                               STACK 

// #include <iostream>
// using namespace std;

// class stack{
// int n = 2;
// int arr[2];
// int top =-1;

// public:
//  void push (int x){
//     if(top >= n-1){
//         cout<<"stack overflow    \n ";
//           return;
//     }
// //  ++top;
//   arr[++top]=x;
//  }

//  void pop(){
//     if(top ==-1){
//         cout<<"stack underflow, no ele to pop    \n";
//           return;
//     }
//     top--;
//     cout<<"\n";
  
// }

// int Top(){
//     if(top == -1){
//         cout<<"no ele on top    \n";
//         return -1;
//     }
//      cout<<"\n";
//     return arr [top];
//         cout<<"\n";
// }

// int display(){
//     // if(top>-1){
//      cout<<"\n";
//     for(int i =0; i<=top; i++){
//         cout<<arr[i]<<" \n";
//     }
//     // return 0;
// }
// // cout<<"stack empty ";
// // }
// };
 
// int main(){
//     // system("CLS");
//     stack st;
//  int choise , value;

 
//     do{
//   cout<<"1 push\n";
//   cout<<"2 pop\n";
//   cout<<"3 peak\n";
//   cout<<"4 display\n";
//   cout<<"5 exit\n";
//   cout <<"enter your choise: ";
//   cin >>choise;
// switch(choise){
//   case 1:
//   cout<<"enter the value to be pushed: ";
//   cin>>value;
//   st.push(value);
//    break;

//  case 2: 
//  st.pop();
//  if (value!=-1){
//     cout<<"value poped";
//  }
//   break;

//  case 3:
//  if(value!=-1){
//     cout<<"the value on top is: ";
//  }
//  cout<< st.Top();
//   break;

//  case 4:
//  if(value!=-1){
//     cout<<"the values in stack are: ";
//  }
//  st.display();
//   break;

//  case 5:
//  cout<< "EXIT";
//  break;

//  default:
//  cout<<"invalid";
//  break;
//   } }
//  while (choise <5);

 
//  return 0;
// }


//                                     QUEUE

// #include <iostream>
// using namespace std;
//  class queue{
//   int n=2;
//   int arr[2];
//   int x; 
//  int front=0;
// int rear=0;
// public:
// int enqueue(int x){
//   if(rear>=n){
// cout<<"overflow";
//   }
//   arr[rear++]=x;
// }
// int dequeue(){
//   if(front ==0 && rear==0){
//     cout<<"under flow";
//     return -1;
//   }
//   front ++;
// }

// int display(){
//   for(int i= front;i<rear;i++){
//     cout<<arr[i]<<" \n";
//   }
// }
//  };
//  int main(){
//   queue c;
//   c.enqueue(10);
//   c.enqueue(20);
//   c.enqueue(30);
//   c.display();
//   c.dequeue();
//   c.display();
//  }




// #include <iostream>
// using namespace std;
// class queue{
//  int n=2;
//   int arr[2];
//   int front =0;
//   int rear =0;
// public:
//   void enqueue (int x){
//     if(rear>=n){
//         cout << "\noverflow\n";
//         // return;
//     }
//     else{
//     arr[rear++]=x;
//   }
//   }

//   void dequeue(){
//     if(front==-1 && rear==-1){
//       cout<<"\nunderflow\n";
//       // return;
//     }
//     else{
//     front++;
//   }
//   }

// void display(){
//   for(int i=front;i<rear;i++){
//     cout<<arr[i]<<"\n";
//   }
//   return ;
// }
  
// };
// int main(){
//   queue c;
//   int choise, value;

// do{
//   cout<<"1.enqueue \n";
//   cout<<"2.dequeue \n";
//   cout<<"3.display \n";
//   cout<<"4.EXIT \n";
//   cout<<"enter yout choise: ";
//   cin>>choise;

//   switch(choise){
//     case 1:
//     cout<<"enter the value to be enqueue: ";
//     cin>>value;
//     c.enqueue(value);
//     break;

//     case 2:
//     c.dequeue();
//       cout<<"\nvalue dequeued\n";
//     break;

//     case 3:
//     cout<<"the elements in queue are : ";
//     c.display();
//     break;

//     case 4:
//      cout<<"EXIT";
//      break;

//     default:
//     cout<<"INVAILED H BKL";
//   }

// }

//   while(choise<4);
// }



//                                             BANK SYSTEM
// #include <iostream>
// using namespace std;
// class BANK{
//   int bal=0;

// public:

// void deposit(int x){
//   bal+=x;
//   cout<<"\n money deposited successfully !\n\n";
// }


// void withdraw(int x){
//   if(x>bal){
//     cout<<"\n YOU DONT HAVE ENOUGH BALANCE\n THANK YOU VISIT AGAIN\n";
//     balance();
//     return;
//   }
//   bal-=x;
//   cout<<"\n money withdrawal successfully !\n\n""";
// }

// void balance(){
//   if(bal==0){
//     cout<<"\nKANGLE , KUCH NI H TERE PASS\n";
//     return;
//   }
//   cout<<"\n YOUR BALANCE IS : "<<bal<<"\n";
// }


// };
// int main(){
//   system ("cls");
//   BANK B;
// int choice, value;
//   do{
//     cout<<"--------------------------------WELCOME TO GAPLA BANK---------------------------------------------------\n";
//     cout<<"1.DEPOSIT MONEY\n";
//     cout<<"2.WITHRAWAL\n";
//     cout<<"3. CHECK BALANCE\n";
//     cout<<"4. EXIT\n";
//     cout<<"ENTER YOUR CHOICE: ";
//     cin>>choice;
//        switch(choice){
//     case 1:
//     cout<<"ENTER THE MONET TO BE DEPOSITED: ";
//     cin>>value;
//     B.deposit(value);
//     break;


//      case 2:
//      cout<<"ENTER THE MONEY TO BE WITHDRAW: ";
//      cin>> value;
//      B.withdraw(value);
//      break;

//      case 3:
//         B.balance();
//         break;

//      case 4:
//      cout<<"\nTHANKS FOR VISITING!!\n\n";
//      break;
     
//      default:
//      cout<< "INVALID CHOICE!!";
//      break;
// }
// }
// while(choice<4);
// }

//                                      PYRAMID PATTERN 

// #include <iostream>
// using namespace std;
// int main (){
//   system("cls");
//   int n=5;
//   for(int i =0; i<=n; i++){
//    for(int k =i; k<=n;k++){
//     cout<<" ";
//    }
//     for(int j=n; j>n-i;j--){
//     cout<<"* ";
//     }
//     cout<<"\n";
  
// }
// }



// #include <iostream>
// using namespace std;
// int main() {
//    int n = 5;
// for (int i = 1; i <= n; i++) {
//      for (int j = 1; j <= n - i; j++) {
//            cout << " ";
//       }
//        for (int k = 1; k <= 2*i - 1; k++) {
//            cout << "*";
//        }
//       cout << endl;
//   }
//    return 0;
// }


//                                   DIAMOND PATTERN 

#include <iostream>
using namespace std;
int main (){
  system("cls");
  int n=5;
  for(int i =0; i<=n; i++){
   for(int k =i; k<=n;k++){
    cout<<" ";
   }
    for(int j=n; j>n-i;j--){
    cout<<"* ";
    }
    cout<<"\n";
  
}
  for(int i =5; i>=0; i--){
   for(int k =i; k<=n;k++){
    cout<<" ";
   }
    for(int j=n; j>n-i;j--){
    cout<<"* ";
    }
    cout<<"\n";
  
}
}