#include<iostream>
using namespace std;
class valid
{
public:
    int p,q,r,count=0;
    void exp1();
    int im(int,int);

};
void valid::exp1()
{
    for(p=0; p<2; p++)
    {
        for(q=0; q<2; q++)
        {
            for(r=0; r<2; r++)
            {
                int res=im(im(p,q)&&im(q,r),im(p,r));
                cout<<"| "<<p<<" | "<<q<<" | "<<r<<" | "<<res<<" |"<<endl;
                if(res==1)
                {
                    count++;
                }
            }

        }

    }

}
int valid::im(int a,int b)
{
    return !(a*2+b==2);
}
int main()
{
    cout << "Checking the validity for the following Compound S:" << endl;
    cout << "1. [(P->Q)^(Q->R)]=>(P->R)\n" << endl;
    valid v;
    cout << "-----------------" << endl;
    cout<<"| P"<<" | Q"<<" | R"<<" |RES|"<<endl;
    cout << "-----------------" << endl;
    v.exp1();
    cout << "-----------------" << endl;
    return 0;
}
