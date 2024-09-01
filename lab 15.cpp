#include<iostream>
using namespace std;
class math
{
public:
    void permu(int n,int r);
    void comb(int n,int r);
    int fact(int n);
};
void math::permu(int n,int r)
{
    int per=fact(n)/fact(n-r);
    cout<<"\nThe Permutation of "<<n<<"P"<<r<<" is:"<<per;
}
void math::comb(int n, int r)
{
    int com=fact(n)/(fact(n-r)*fact(r));
    cout<<"\nThe Combination of "<<n<<"C"<<r<<" is:"<<com;
}
int math::fact(int n)
{
    if(n==1||n==0)
        return 1;
    else
        return n*fact(n-1);
}
int main()
{
    int r,n;
    math per,com;
start:
    cout<<"Enter the value of n: ";
    cin >> n;
    cout<<"Enter the value of r: ";
    cin >> r;
    if(n<r)
    {
        cout <<"\nInvalid input: n should be greater then or equal to r.\n";
        cout<<"Enter the values again:\n\n";
        goto start;
    }
    per.permu(n,r);
    com.comb(n,r);
    cout << "\n\nProgram by: KUSHAL DHAKAL";
    return 0;
}
