/*take two numbers input from user and perform a division operation and nd out quotient 
and reminder (without using / and % operator) also note that a smaller number should 
divide a bigger number. 
*/
#include<stdio.h>
int main(){
    int n1,n2;
    printf("enetr a two number:");
    scanf("%d %d",&n1,&n2);
    int q=0,rem;
    int divisor,dividend;

    if(n1>n2){
        divisor=n2;
        dividend=n1;
    }

    else{
        divisor=n1;
        dividend=n2;
    }

    if(divisor==0){
        printf("division is not posible:");

    }

    while(dividend>=divisor){
        dividend=dividend-divisor;
        q++;
    }

    rem=dividend;

    printf("rem=%d\n quotient=%d",rem,q);
    
}
