#include <stdio.h>
int main(){
    int a,isPrime==1;
    scanf("%d",&a);
    for(int b=2;b<a;b++){
        if(a%b==0){
            printf("Not Prime");
            isPrime = 0;
            break;
            
    }
    else{
        continue;
    }

    }
    if(isPrime==1){
        printf("Prime");
    }
    return 0;


}