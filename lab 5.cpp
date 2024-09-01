#include<iostream>
using namespace std;
int main()
{
    float a,b;
    cout << "Enter membership function of element of Set A:" ;
    cin >> a;
    cout << "Enter membership function of same element of Set B:" ;
    cin >> b;
    cout << "\nThe membership function of Union is:"<<((a>b)?a:b)<<endl; 
    cout << "The membership function of intersection is:"<<((a<b)?a:b)<<endl;
    cout << "The membership function of Complement A is:"<<1.0-a<< endl;
    cout << "The membership function of Complement B is:"<<1.0-b<< endl;
    cout << "\nProgram by: KUSHAL DHAKAL";
    return 0;
}
