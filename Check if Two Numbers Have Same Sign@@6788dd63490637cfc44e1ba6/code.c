#include <stdio.h>
int main(){
    int a,b;
    scanf("%d",&a,&b);
    if(a*b>0){
        printf("Same Sign");
}
    else if(a*b<0){
        printf("Different Sign");
    }
}