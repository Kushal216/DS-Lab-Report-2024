#include<iostream>
#include<cmath>
using namespace std;
class FC
{
public:
    int n,s,t,q,r,f,g;
    int s1=0,s0=1,t1=1,t0=0;
    void gcd(int a,int b)
    {
        f=a;
        g=b;
        while(b!=0)
        {
            q=a/b;
            r=a%b;
            a=b;
            b=r;
            s=s0-q*s1;
            t=t0-q*t1;
            s0=s1;
            s1=s;
            t0=t1;
            t1=t;
        }

        if((f*s0+g*t0)==a)
        {
            cout <<"GCD is:"<<a<<endl;
            cout << "S is:"<<s0 << endl;
            cout << "T is:"<<t0 << endl;
        }
    }
};
int main()
{
    int a,b,temp;
    FC c;
    cout << "Enter the first number:";
    cin >> a;
    cout << "Enter the second number:";
    cin >> b;
    if(a<b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    c.gcd(a,b);
    cout << "\nProgram by: KUSHAL DHAKAL";
    return 0;
}
