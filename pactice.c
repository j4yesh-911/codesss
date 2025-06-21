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



#include <stdio.h>
main (){
    int c;
    c =getchar ();
    while (c!= EOF){
        putchar(c);
       c= getchar ();
    }
}