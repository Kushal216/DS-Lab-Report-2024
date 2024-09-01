#include <iostream>
#include<cmath>
using namespace std;
class Bina
{
public:
int bi;
    int add(int,int);
    int sub(int,int);
    void mul(int,int);
    void divide(int,int);
    int binary(int);
};
int Bina::add(int a,int b)
{
    int c=0,i=0, sum[50],s=0;
    if(a==0)
    {
        return b;
    }
    else if(b==0)
        return a;

    while (a != 0 ||b != 0)
    {
        sum[i] =(a % 10 + b % 10 + c) % 2;
        s+=sum[i]*pow(10,i);
        c =(a% 10 + b % 10 + c) / 2;
        a /= 10;
        b /= 10;
        i++;
    }
    if (c != 0) {
        sum[i] = c;
        s+=sum[i]*pow(10,i);
        i++;
    }
    return s;
}
int Bina::sub(int a,int b)
{
    int d,f=0,i=0,s,t;
    s=(a>=b)?0:1;
    if(s)
    {
        t=a;
        a=b;
        b=t;
    }
    t=a;
    i=0;
    while(t!=0)
    {
        t/=10;
        f+=pow(10,i++);
    }
    b=f-b;
    d=add(a,b);
    d=d-pow(10,i);
    d=add(d,1);
    return (s)?(-d):d;
}
void Bina::mul(int a,int b)
{
    int i=0,c[20],p=0;
    while(b!=0) {
        (b%10)?c[i]=(a*pow(10,i)):(c[i]=0);
        b/=10;
        p=add(p,c[i]);
        i++;
    }
    cout<<"\nThe product is: "<<p;
}
void Bina::divide(int a,int b)
{
    int q=0,r=a;
    while(r>=b)
    {
        r= sub(r,b);
        q++;
    }
   // q=binary(q);
    cout<<"\nThe Quotient is: "<< q<<" and the remainder is: "<<r;
}
/*int Bina::binary(int x)
{
    if (x == 0)
    {
        return 0;
    }
    while (x> 0) {
        bi = (x% 2 == 0 ? "0" : "1") + bi;
        x/= 2;
    }
    return bi;

}*/
int main()
{
    Bina M1,M2,M3,M4;
    int a,b;
    cout<<"Enter first binary integers: ";
    cin >> a;
    cout<<"Enter second binary integers: ";
    cin >>b;
    int s=M1.add(a,b);
    cout<<"\nThe sum is: "<<s;
    s=M2.sub(a,b);
    cout<<"\nThe difference is: "<<s;
    M3.mul(a,b);
    M4.divide(a,b);
    cout << "\n\nProgram by: KUSHAL DHAKAL";
    return 0;
}
