///week09-2.cpp �禡�̪��ܼ� vs.�~�����ܼ�
#include <stdio.h>
int myFuncA(){
    int x=200;
    printf("myFunA()�̪�x�O:%d\n",x);
}
int main(){
    int  x=100;
    printf("main()�̪��O:%d\n",x);
    myFuncA();
    printf("main()�̪�x�O:%d\n",x);
}
