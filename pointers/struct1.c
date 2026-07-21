#include <stdio.h>
typedef struct student{
    int reg_no;
    char name[10];
    float cgpa;
}stu;
int main(){
     stu a;
     scanf("%d %s %f",&a.reg_no, &a.name, &a.cgpa);
     printf("%d\n%s\n%f\n",a.reg_no, a.name, a.cgpa);
    }