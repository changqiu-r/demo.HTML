#include<stdio.h>

void caculate(int n);

int main (void) {
    int n;
    caculate(n);
    return 0;
}

void caculate(int n){
    int number,result,i,zero_number;
    number=1;
    result=1;
    i=10;
    zero_number=0;
    while (number<=n) {
        result=number*result;
        number=number+1;
    }
    while (result%i==0){
        zero_number=zero_number+1;
        i=i*10;
    }
    printf("%d",zero_number);
}
