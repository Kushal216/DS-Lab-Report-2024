#include<iostream>
using namespace std;
class FC
{
public:
    int n;
    int gcd(int a,int b)
    {
        while(b>0)
        {
            n=a%b;
            a=b;
            b=n;
        }
        return a;
    }
};
int main()
{
    int a,b,temp;
    FC c,d;
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
    int g=c.gcd(a,b);
    cout << "Gcd is:" << g<<endl;
    cout << "\n\nProgram by: KUSHAL DHAKAL";
    return 0;
}
