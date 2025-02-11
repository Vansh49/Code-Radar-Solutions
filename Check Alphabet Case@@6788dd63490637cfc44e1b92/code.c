#include <stdio.h>

int main(){
    char a;
    scanf("%d",&a);
    if(isalpha(a)){
        if(isupper(a)){
            printf("Uppercase");
        }
        elseif(islower(a)){
            printf("Lowercase");
        }
    }
    else{
        printf("Not an alphabet");
    }
}
