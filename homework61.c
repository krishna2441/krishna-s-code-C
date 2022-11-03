#include<stdio.h>

void work(int *a , int *b );

int main() {
    int a ; int b;
    printf("enter a number");
    scanf("%d",&a);
    printf("enter another number");
    scanf("%d",&b);
    work(&a,&b);
    return 0;
}

void work(int *a , int *b ) {
    if (*a > *b) {
        printf("this number is greater %d \n",*a);
    }
    if (*b > *a) {
        printf("this number is greater %d \n",*b);
    }
    else {
        printf("both  number are equal \n");
    }
}