///week04-5.cpp CPE-0102A,�ݤ��P���ƪ��k
///Allman(ANST)�BJava�BK&C(C�o����)�BStoustrup(C++�ƪ��k)
#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d",&n);
    for(int i=0; i<n; i++) {
        scanf("%d",&a);
        int ans=0;
        for(int j=0; j<a; j++) {
            scanf("%d",&b);
            ans+=b;
        }
        printf("%d\n",ans);
    }
}
