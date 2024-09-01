#include<iostream>
using namespace std;
class Propo
{
public:
    int i,j,res;
    void negation();
    void conjunction();
    void disjunction();
    void implication();
    void biconditional();
    void tautology();
    void contradiction();
};
void Propo::negation()
{
    for(i=0; i<2; i++)
    {
        res=(i)?0:1;
        cout<<"|" <<i<<" | "<<res<<"  |"<<endl;
    }
}
void Propo::conjunction()
{
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            res=i&&j;
            cout<<"|" <<i<<" | "<<j<<"  | "<<res<<"  |"<<endl;
        }
    }
}
void Propo:: disjunction ()
{
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            res=i||j;
            cout<<"|" <<i<<" | "<<j<<"  | "<<res<<"  |"<<endl;
        }
    }
}
void Propo::implication()
{
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            if(i==1&&j==0)
            {
                res=0;
            }
            else
            {
                res=1;
            }
            cout<<"|" <<i<<" | "<<j<<"  | "<<res<<"  |"<<endl;
        }
    }
}
void Propo:: biconditional()
{
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            if(i==j)
            {
                res=1;
            }
            else
            {
                res=0;
            }
            cout<<"|" <<i<<" | "<<j<<"  |  "<<res<<"  |"<<endl;
        }
    }
}
void Propo::tautology()
{
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            res=((i&&j)*2+(i||j)==2);
            cout<<"|" <<i<<" | "<<j<<"  |      "<<res<<"     |"<<endl;
        }
    }
}
void Propo::contradiction()
{
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            res=!((i&&j)*2+(i||j)==2);
            cout<<"|" <<i<<" | "<<j<<"  |        "<<res<<"      |"<<endl;
        }
    }
}
int main()
{
    Propo P1,P2,P3,P4,P5,P6,p7;
    cout << "The Truth Tables for \nCompound Propositions are:" << endl;
    cout << "\n1. Negation:" << endl;
    cout <<"|p | "<<"~p |"<<endl;
    P1.negation();
    cout << "\n2. Conjunction:" << endl;
    cout <<"|p | "<<"q  |p^q |"<<endl;
    P2.conjunction();
    cout << "\n3. Disjunction:" << endl;
    cout <<"|p | "<<"q  |pvq |"<<endl;
    P3.disjunction();
    cout << "\n4. implication:" << endl;
    cout <<"|p | "<<"q  |p->q|"<<endl;
    P4.implication();
    cout << "\n5. Bi-conditional:" << endl;
    cout <<"|p | "<<"q  |p<->q|"<<endl;
    P5.biconditional();
    cout << "\nWe have taken (p^q)->(qvp) as \ncompound ptoposition:"<< endl;
    cout << "6. Tautology:" << endl;
    cout <<"|p | "<<"q  |(p^q)->(qvp)|"<<endl;
    P6.tautology();
    cout << "\nWe have taken ~[(p^q)->(pvq)] as \ncompound ptoposition:"<< endl;
    cout << "7. Contradiction:" << endl;
    cout <<"|p | "<<"q  |~[(p^q)->(pvq)]|"<<endl;
    p7.contradiction();
    return 0;
}
