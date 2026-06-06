// take hedder file which work scanf and priint
#include<stdio.h>
// dlecrae function for run code 
int main(void){
int num1,num2;
printf("Enter your number\n");
scanf("%d",&num1);
printf("Enter your number\n");
scanf("%d",&num2);
if(num1>num2){
printf("Num1 is getter than num2\n");

}
else if(num2>num1){
    printf("Num2 is getter than num1\n");
}
else{
    printf("Num1 and Num2 is equal");
}
return 0;
}