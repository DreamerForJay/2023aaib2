///week10-2cpp 輾轉相除法 最大公因數
/// a大的 b中的 c小的a%b greatest common divisor
#include <stdio.h>
int gcd(int a,int b){
    if(a==0) return b;
    if(b==0) return a; ///有人會省略這一行
    return gcd(b,a%b); ///老二生即變老大
}
int main(){
    printf("請輸入  a b 兩個數字:");
    int a,b;
    scanf("%d %d",&a,&b);
    printf("最大公因數是: %d\n",gcd(a,b) );
}
