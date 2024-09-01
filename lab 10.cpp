#include<iostream>
using namespace std;
class CRT
{
public:
    int m[100],a[100],m_inv[100],b[100];
    int i,j,mul=1,x=0;
    void chineese(int n);
    int inverse1(int a, int m);
};
void CRT::chineese(int num)
{
    cout << "Enter values of a:" ;
    for(i=0; i<num; i++)
    {
        cin >> a[i];
    }
    cout << "Enter values of m:" ;
    for(i=0; i<num; i++)
    {
        cin >> m[i];
        b[i]=m[i];
        mul=mul*m[i];
    }
    for(i=0; i<num; i++)
    {
        m[i]=mul/m[i];
        m_inv[i]=inverse1(m[i],b[i]);
        if(m_inv[i]==-1)
        {
            cout << "inverse doesn't exist" <<m_inv[i]<< endl;
            exit(0);
        }
    }
    for(i=0; i<num; i++)
    {
        x=x+a[i]*m[i]*m_inv[i];
    }
    while(x>=mul)
    {
        x=x-mul;
    }
    cout << "\nThe value of x is:"<<x << endl;
}
int CRT::inverse1(int a, int m)
{
    for (int j= 1; j< m; j++)
    {
        if ((a * j) % m== 1)
        {
            return j;
        }
    }
    cout << "inv=" << j<<endl;
    return -1;
}
int main()
{
    CRT c;
    int n;
    cout << "Enter the number of systems: ";
    cin >> n;
    c.chineese(n);
    cout << "\n\nProgram by: KUSHAL DHAKAL";
    return 0;
}
