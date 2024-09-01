#include<iostream>
using namespace std;
class  Set
{
public:
    int n,i,j,k,S[100];
    void input(int n)
    {
        cout << "Enter it's elements: ";
        for(i=0; i<n; i++)
        {
            cin>>S[i];
        }
    }
    void display(int a)
    {
        cout << "{ ";
        for(i=0; i<a; i++)
        {
            cout<<S[i]<<",";
        }
        cout << "\b}";
    }
    void Union1( Set A,Set B,int x,int y)
    {
        cout << "\n\nUnion={ ";
        for(i=0; i<x; i++)
        {
            cout <<A.S[i]<<",";
        }
        for(j=0; j<y; j++)
        {
            for(i=0; i<x; i++)
            {
                if(B.S[j]==A.S[i])
                {
                    k=1;
                }
            }
            if(k!=1)
            {
                cout <<B.S[j]<< ",";
            }
            k=0;
        }
        cout << "\b}" << endl;
    }
    void intersection( Set A,Set B,int x,int y)
    {
        cout << "Intersection={ ";
        for(i=0; i<x; i++)
        {
            for(j=0; j<y; j++)
            {
                while(A.S[i]==B.S[j])
                {
                    cout << A.S[i] <<",";
                    break;
                }
            }
        }
        cout << "\b}";
    }
    void difference_A( Set A,Set B,int x,int y)
    {
        cout << "\nA-B={ ";
        for(i=0; i<x; i++)
        {
            for(j=0; j<y; j++)
            {
                if(A.S[i]==B.S[j])
                {
                    k=1;
                }
            }
            if(k!=1)
            {
                cout <<A.S[i]<< ",";
            }
            k=0;
        }
        cout << "\b}";
    }
    void difference_B( Set A,Set B,int x,int y)
    {
        cout << "\nB-A={ ";
        for(j=0; j<y; j++)
        {
            for(i=0; i<x; i++)
            {
                if(B.S[j]==A.S[i])
                {
                    k=1;
                }
            }
            if(k!=1)
            {
                cout <<B.S[j]<<",";
            }
            k=0;
        }
        cout << "\b}";
    }
};
int main()
{
    Set s1,s2,s3,s4,s5,s6;
    int a,b;
    cout << "Enter the no of elements in setA: ";
    cin>>a;
    s1.input(a);
    cout << "\nEnter the no of elements in setB: ";
    cin>>b;
    s2.input(b);
    cout << "\nThe elements of setA: ";
    s1.display(a);
    cout << "\nThe elements of setB: ";
    s2.display(b);
    s3.Union1(s1,s2,a,b);
    s4.intersection(s1,s2,a,b);
    s5.difference_A(s1,s2,a,b);
    s6.difference_B(s1,s2,a,b);
    cout << "\n\nProgram by: KUSHAL DHAKAL";
    return 0;
}
