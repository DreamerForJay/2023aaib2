//week10-5.cpp 1021-04-09 list a;; primes
#include <stdio.h>
int isPrime(int n){
    //onlt 1 and n can divide it
    //2... n-1 all cant't divide it
    for(int i=2;i<n;i++){
        if(n%i==0)return 0; //sad! failed
    }
    return 1; //happy!
}
int main(){
    int n;
    scanf("%d",&n);\
    for(int i=2;i<=n;i++){
        if(isPrime(i)) printf("%d ",i);
    }
}
