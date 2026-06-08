#include<stdio.h>

int main()
{
    char c;
    printf("are you agree?");
    scanf("%c",&c);
   
    if(c=='y'||c=='Y'){
        printf("Agree");

    }
    else{
        printf("Not Agree!");
    }
    
    
return 0;
}
