//                                              BASIC C PROGRAMMING

// #include <stdio.h>
// int main(){
//     printf("hello world
//         ");
// }


// void main(){

// }

// #include <stdio.h>
// int main(){
//     printf("hello world\c ");
// }



// #include <stdio.h>
// int main(){
//     int a =3;
//   int B=  ++a + a++ + --a;
//     printf("%d",B);
// }



// #include <stdio.h>
// int main(){
//     system("cls");
// int far ,cel ;
// int lower, upper, step;
// lower=0;
// upper =300;
// step=20;
// far=lower;
//  printf("far\t cel\n");
// while (far<=upper){
//     cel = 5*(far-32)/9;
//     // printf("%d \t%d\n",far, cel);
//     printf("%3d %6d\n",far, cel);
//     far += step;
// }
// }



// #include <stdio.h>
// int main(){
//     system("cls");
// float far ,cel ;
// int lower, upper, step;
// lower=0;
// upper =300;
// step=20;
// far=lower;
//  printf("far\t cel\n");
// while (far<=upper){
//     cel = 5*(far-32)/9;
//     // printf("%d \t%d\n",far, cel);
//     printf("%3.0f %10.2f\n",far, cel);
//     far += step;
// }
// }



// #include <stdio.h>
// void main (){
//     int c;
//     c =getchar ();
//     while (c!= EOF){
//         putchar(c);
//        c= getchar ();
//     }
// }


// #include <stdio.h>

// int main(void) {
//     int c;
//     while ((c = getchar()) != EOF) { 
//here we used parentheses because precdence of " != i " higher then " = ";
//         printf("%d ", c != EOF);
//         putchar(c);
//     }
//     printf("\n%d\n", c != EOF);
//     return 0;

// }

// #include <stdio.h>
// int main(){
// printf("%d",EOF);
// }



// #include <stdio.h>
// int main(){
//     long nc;  //long = lpng int;
//     nc=0;
//     while(getchar()!=EOF){
//         ++nc;
//         printf("%6ld",nc);
//     }
// }


// #include <stdio.h>
// int main(){

//     //line counting program

//     long nc;  
//     int c;
//     nc=0;
//     while((c=getchar())!=EOF){
//         if(c==' ')
//         ++nc;
//         printf("%6ld",nc);
//     }
// }


// #include <stdio.h>
// #define out 0
// #define in 1
// int main(){
//     int c, state;
//    long int nw,nl,nc;
//    state =out;
//  nw,nl,nc=0;
//  while((c=getchar())!=EOF){
//     ++nc;
//     if(c=='\n'){
//         ++nl;
//     }
//     if(c==' '||c=='\n'||c=='\t')
//         state =out;
//         else if (state==out){
//         state = in ;
//         ++nw;
//     }
//  }
//  printf("%ld,%ld,%ld\n",nl,nw,nc);
// }




// #include <stdio.h>

// /* count digits, white space, others */
// main() {
//     int c, i, nwhite, nother;
//     int ndigit[10];

//     nwhite = nother = 0;
//     for (i = 0; i < 10; ++i)
//         ndigit[i] = 0;

//     while ((c = getchar()) != EOF)
//         if (c >= '0' && c <= '9')
//             ++ndigit[c - '0'];
//         else if (c == ' ' || c == '\n' || c == '\t')
//             ++nwhite;
//         else
//             ++nother;

//     printf("digits =");
//     for (i = 0; i < 10; ++i)
//         printf(" %d", ndigit[i]);
//     printf(", white space = %d, other = %d\n",
//            nwhite, nother);
           
// }



// #include <stdio.h>
//    int power(int i, int n);
// int main(){
//     for(int i =0; i<10;i++){
//         printf("%d,%d,%d",i,power(2,i),power(-3,i));
//         // return 0; 
//     }
// }
// int power(int base, int n) {
//     int i, p;
//     p = 1;
//     for (i = 1; i <= n; ++i)
//         p = p * base;
//     return p;
// }


#include <stdio.h>
int power(int  , int  );
int main (){
    for(int i =0;i<10;i++){
printf("%d,%d,%d",i,power(2,i),power(-3,i));
return 0;
}
}
int power(int base , int n){
    int p;
    p=1;
    for(int i=1;i<=n;++i)
    p=p*base;
    return p;

}

