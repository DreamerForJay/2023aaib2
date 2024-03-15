///week04-5.cpp CPE-0102A,看不同的排版法
///Allman(ANST)、Java、K&C(C發明者)、Stoustrup(C++排版法)
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
