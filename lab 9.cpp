#include<iostream>
using namespace std;
#define M 3
#define N 3
class Boolean
{
public:
    int mat[M][N],mat2[M][N],mat3[M][N];
    int i,j,k,s;
    void get();
    void joint(Boolean, Boolean);
    void meet(Boolean, Boolean);
    void boolean_product(Boolean, Boolean);
    void display();
};
void Boolean::get()
{
    for(i=0; i<M; i++)
    {
        for(j=0; j<N; j++)
        {
            cin>>mat[i][j];
        }
    }
}
void Boolean::joint(Boolean A,Boolean B)
{
    for(i=0; i<M; i++)
    {
        cout << "| ";
        for(j=0; j<N; j++)
        {
            mat3[i][j] = A.mat[i][j]||B.mat[i][j];
            cout<<mat3[i][j]<<" ";
        }
        cout << "|\n";
    }
}
void Boolean::meet(Boolean A,Boolean B)
{
    for(i=0; i<M; i++)
    {
        cout << "| ";
        for(j=0; j<N; j++)
        {
            mat3[i][j] = A.mat[i][j]&&B.mat[i][j];
            cout<<mat3[i][j]<<" ";
        }
        cout << "|\n";
    }
}
void Boolean::boolean_product(Boolean A,Boolean B)
{   for(i=0; i<M; i++)
    {
        cout << "| ";
        for(j=0; j<N; j++)
        {
            for(k=0; k<=1; k++)
            {
                s = s|| A.mat[i][k]||B.mat[k][j];
            }
            mat3[i][j]=s;
            s=0;
            cout <<mat3[i][j]<<" ";
        }
        cout << "|\n";
    }
}
int main()
{
    Boolean b1,b2,b3,b4;
    cout<<"Enter element of first 3*3 boolean matrix(row-wise)\n";
    b1.get();
    cout<<"Enter element of second 3*3 boolean matrix(row-wise)\n";
    b2.get();
    cout<<"The join matrix:\n";
    b3.joint(b1,b2);
    cout<<"\n\nThe meet matrix:\n";
    b3.meet(b1,b2);
    cout<<"\n\nThe booleanp Poduct matrix is:\n";
    b4.boolean_product(b1,b2);
    return 0;
}
