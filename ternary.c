// how to use ternary operaton in c programming language 
#include<stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    int lou= (num >=0 ? num : -num);
    
    printf("%d", lou);
    // printf("hello");
}