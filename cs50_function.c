#include<stdio.h>
// frist type
// void meow(void){
//     printf("Meow");
// }
// prottype
void meow(int n);

int main()
{

    meow(4);


return 0;
}

// 2nd type
// void meow(void){
//     printf("Meow");
// }

// with input

void meow(int n){
    for(int i=1;i<=n;i++){
        printf("Meow");
    }
}
