#include <stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    for(int b=2;b<a;b++){
        if(a%b==0){
            printf("Not Prime");
            break;
    }

    }
    if(b==a-1){
        printf("Prime");
    }
    return 0;


}