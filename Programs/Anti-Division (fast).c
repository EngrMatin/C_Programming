#include<stdio.h>
#include<math.h>

int main()
{
    long long a, b, c, d, ans=0;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    long long x,y,r,gcd,lcm, p, q;
    x=c,y=d;
    while(x!=0)
    {
        r=y%x;
        y=x;
        x=r;
    }
    gcd=y;
    lcm=(c*d)/gcd;

    //long long p,p1,p2,p3,p4,p5,q,q1,q2,q3,q4,q5;
//    p1=b/c;
//    p2=b/d;
//    p3=b/lcm;
//    p4=p1+p2-p3;
//    p5=b-p4;
    p=b-(b/c+b/d-b/lcm);

//    q1=(a-1)/c;
//    q2=(a-1)/d;
//    q3=(a-1)/lcm;
//    q4=q1+q2-q3;
//    q5=(a-1)-q4;
    q=(a-1)-((a-1)/c+(a-1)/d-((a-1)/lcm));

    ans=p-q;

    printf("%lld\n", ans);
    return 0;
}
