#include<stdio.h>
int main(){
    int i, n, test;
    printf("enter your no. to check whether it is a prime no. or not\n");
    scanf("%d", &n);
    for(i=2; i<n;i++) {
         if(test%i!=0){
            printf("your no. is a prime no.");
        }
        else{
            printf("your no. is not a prime no.");
        }
        break;
    }
    // if(test==0){
    //        printf("your no. is a prime no.");
    //    }
    //    else{
    //        printf("your no. is not a prime no.");
    //    }
    return 0;
}