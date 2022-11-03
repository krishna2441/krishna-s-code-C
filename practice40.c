#include<stdio.h>

void sum(int a , int b);
void average(int a , int b);
void product(int a , int b);

int main() {
    int a; int b;
    printf("enter a number \n");
    scanf("%d",&a);
    printf("enter another number \n"); 
    scanf("%d",&b);
    average(a,b);
    sum(a,b);
    product(a,b);
    return 0;
}


void sum(int a , int b) {
    int addition = a + b;
    printf("the sum of two number %d \n", addition);
}


void average(int a , int b) {
    int avg = (a+b)/2;
    printf("the average of two number is %d \n",avg);
}


void product(int a , int b) {
    int mult = a * b;
    printf("the product of two number is %d \n",mult);
}