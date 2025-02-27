#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d",&a);
    for(int b=2;b<a;b++){
        if(a%b==0){
            printf("Not Prime");
            break;
            c=b;
    }
    else{
        continue;
    }

    }
    if(c==a-1){
        printf("Prime");
    }
    return 0;


}