#include <stdio.h>
#define out 0
#define in 1
int main(){
    int c, state;
   long int nw,nl,nc;
   state =out;
 nw=nl=nc=0;
 while((c=getchar())!=EOF){
    ++nc;
    if(c=='\n'){
        ++nl;
    }
    if(c==' '||c=='\n'||c=='\t')
        state =out;
        else if (state==out){
        state = in ;
        ++nw;
    }
 }
 printf("%ld,%ld,%ld\n",nl,nw,nc);
}