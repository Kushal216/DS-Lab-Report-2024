#include<iostream>
using namespace std;
class  Set
{
public:
    int n,i,j,k,S[100],U[100];
    int A[100];
    void input(int n)
    {
        cout << "Enter it's elements: " << endl;
        for(i=0; i<n; i++)
        {
            cin>>S[i];
        }
    }
    void display(int a)
    {
        cout << "{";
        for(i=0; i<a; i++)
        {
            cout<<S[i]<<",";
        }
        cout << "\b}";
    }
    void Union1( Set A,Set B,int x,int y)
    {
        cout << "\nCartision Product={";
        for(j=0; j<y; j++)
        {
        
            for(i=0; i<x; i++)
            {
                cout << "(" << A.S[i]<<","<<B.S[j]<<"),";
            }
        }
        cout << "\b}" << endl;
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
    cout << "\n\nProgram by: KUSHAL DHAKAL";
    return 0;
}
