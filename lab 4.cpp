#include<iostream>
using namespace std;
class FC
{
public:
    float f;
    int a,b;
    int get()
    {
        cout << "Enter the number to find the flour and celling:";
        cin >>f ;
        return f;
    }

    void floor()
    {
        b=(f>0)?(int)f:(int)(f-1);
        cout << "floor:" <<b<< endl;
    }
    void celling()
    {
        b=(f>0)?(int)(f+1):(int)(f);
        cout << "Celling:" <<b<< endl;
    }

};
int main()
{
    FC c;
    c.get();
    if((int)c.f==c.f)
    {
        cout << "floor:" <<c.f<< endl;
        cout << "Celling:" <<c.f<< endl;
    }
    else
    {
        c.floor();
        c.celling();
    }
    cout << "\n\nProgram by: KUSHAL DHAKAL";
    return 0;
}
