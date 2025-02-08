#include <stdio.h>


int main() {
    int a;
    scanf("%d",&a);
    if(a%4==0){
        if(a%100==0){
            if(a%500==0){
                printf("Leap Year\n");
                break;
            }
            else{
                printf("Not a Leap Year\n");
                break;
            }
        
        }
        else{
            printf("Leap Year\n");
            break;}
    }
    else{
        printf("Not a Leap Year\n");
        break;
    }
        
          
    
    return 0;
}