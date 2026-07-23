/*#include <stdio.h>
int main(){
    int a=15,*b,**c;
    b=&a;
    c=&b;
    printf("A Value: %d\n",a);
    printf("A Address: %d\n",&a);
    printf("B Address: %d\n",b);
    printf("B Address: %d\n",&b);
    printf("A Value: %d\n",*b);
    printf("B Address: %d\n",c);
    printf("A Address: %d\n",*c);
    printf("A Value: %d\n",**c);
}*/

#include <stdio.h>
#include <math.h>
/*void change(int *p){
    *p=50;

}
void swap (int *a, int *b){
    int temp= *a;
    *a=*b;
    *b=temp;
}
int main(){
    int a= 25;
    int b = 30;
    swap(&a,&b);
    printf("%d %d",a,b);
}*/
/*void square(int *a){
    *a=(*a) * (*a);
}


int main(){
    int a;
    scanf("%d", &a);
    square(&a);
    printf("%d", a);
}*/





int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }

    rev_array(arr , n)
}