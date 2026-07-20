#include <stdio.h>
int main(){
    int i,rot,temp;
    int n;
    scanf("%d",&n);
    char arr[n];
    for (i =0;i<n;i++){
    scanf("%s",arr); // no need for & to mention in string and just variable name is enough
    }
    scanf("%d",&rot);
    rot=rot%n;
    while(rot--){
        temp=arr[0];
        for (i=0;i<n;i++){
        arr[i]=arr[i+1];
        arr[n-1]=temp;
    }
    
}
    for (i=0;i<n;i++){
    printf("%s",arr);
}}