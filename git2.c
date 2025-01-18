// program to input marks of a student and display their total marks with percentage

#include<stdio.h>
#define F 4
int main(){
    int a[F],i,total;
    float per;
    printf("enter a student's marks in 4 subjects");
    for (i=0;i<4;i++){
        scanf("%d", &a[i]);
    }
    for (i=0;i<4;i++){
        total= total+a[i];
    }
    per = total/5;
    return 0;
}