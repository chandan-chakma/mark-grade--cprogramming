#include<stdio.h>
int main(){
    int a,b, result;
    char op;
    //scanf("%c", );
    scanf("%d %c %d", &a, &op, &b);
    switch(op){
        case'*':
            printf("%d",a*b);
            break;
        case'%':
            printf("%d",a%b);
            break;
        case'/':
            printf("can not divided by 0");
            break;
        case'%0':
            printf("can not mode with 0");

    }
    //printf("%d", result);

    return 0;
}
