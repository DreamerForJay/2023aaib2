//註解:從今天考試程式出發
#include<stdio.h>
int main(){
  int a,b;
  printf("請輸入兩個整數:");///先印中文,提示你輸入
  scanf("%d %d",&a,&b);///scanf()要加&符號
  printf("你輸入了2個數字,直式加法:\n");
  printf("%5d\n",a);
  printf("%5d\n",b);
  printf("-------\n");
  printf("%5d\n",a+b);
}
