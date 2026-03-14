#include <stdio.h>
    int main(){
int num;
int prime = 1;
scanf("%d", &num);

if( num<2){
    prime= 0;
}
for(int i=2; i<num; i++){
    if(num%i==0){
    prime= 0;
    break;
}
    }
    
if( prime==0){
    printf("false");
}else{
    printf("true");
}
return 0;
    }
