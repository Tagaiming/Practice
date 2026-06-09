#include<stdio.h>

int main()
{
    int n;
while(true){
    printf("Enter your number\n");
    scanf("%d",&n);
    if(n>=0){
        break;
    }
}

for(int i=1;i<=n;i++){
        printf("Meow\n");
    }

}