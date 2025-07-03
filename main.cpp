#include <iostream>
using namespace std;
class PrintNumber
{
public:
    int i;
    string c;
    float f;
    PrintNumber(int x,string y,float z)
    {
        i=x;
        c=y;
        f=z;

    }
    void show()
    {
        cout<<"\nNumber: "<<i<<"\nName: "<<c<<"\nMark: "<<f<<endl;
    }
};
int main()
{    int I;
    float F;
    string s;
    cout<<"Enter Roll:"<<endl;
    cin>>I;
    cout<<"Enter Name:"<<endl;
    cin>>s;
    cout<<"Enter marks:"<<endl;
    cin>>F;
    PrintNumber p(I,s,F);
    p.show();
    return 0;
}
