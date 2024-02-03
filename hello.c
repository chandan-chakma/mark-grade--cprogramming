#include<stdio.h>
int main(){
    int width, height;
    scanf("%d %d", &width, &height);
    for(int i =0; i<width; i++){
        printf("*");
    }
    printf("\n");

    for(int i=0; i<height-2;i++){
            printf("*");
            for(int j =0;j<width-2;j++){
                printf(" ");

            }
              printf("*");
              printf("\n");

    }

    for(int i=0; i<width; i++){
        printf("*");
    }
   // printf("\n");
    //for(int i=0; i<height-2; i++){
   // printf("*        *\n");
  // }
//printf("**********\n");



    return 0;
}
