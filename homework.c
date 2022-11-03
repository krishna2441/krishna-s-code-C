#include<stdio.h>

void swap(int *a , int *b);

int main(){
    int x = 3 , y = 5;
    swap(&x,&y);
    printf("x is %d \n",x);
    printf("y is %d \n",y);
    return 0;
}

void swap(int *a , int *b) {
    int t = *a;
    *a = *b;
    *b = t;
    printf("a is %d \n",*a);
    printf("b is %d \n",*b);
}