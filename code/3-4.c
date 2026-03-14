#include <stdio.h>
int main(){
    int a,b,c;
    a=b=c=5;
    printf("%d %d %d\n", a,b,c);
    a=2+3*4;
    printf("%d %d %d\n", a,b,c);
    // a= 14
    c= a++ + ++b;
    //c= 14+ 6= 20,  a는 15됨
    // a=15, b=6, c= 20
    printf("%d %d %d\n", a,b,c);

    return 0;
}
