#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int i = a;
    while(i>0){
        int j=i;
        while(j>0){
            printf("* ");
            j-=1;
        }
        i-=1;
        printf("\n");
    }
    return 0;
}