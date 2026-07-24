#include <stdio.h>
#include <math.h>
int main(){
    int n;
    scanf("%d",&n);
    int x= n+1;
    int root=sqrt(x);
    if (root * root== x){
        printf("Sunny number");
    }
    else{
        printf("Not a sunny number");
    }
}