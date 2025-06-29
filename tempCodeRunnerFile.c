#include <stdio.h>
int power(int base , int n){
    int p;
    p=123456789L;
    for(int i=1;i<=n;++i)
    p=p*base;
    return p;

}
int main (){
    for(int i =0;i<10;i++){
printf("%d,%d,%d",i,power(2,i),power(-3,i));
}
return 0;
}