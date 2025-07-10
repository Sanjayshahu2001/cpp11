#include <iostream>

using namespace std;
class Area
{
    int a,b;

    void setDim()
    {
        cout<<"Enter Length And Breadth Of a Rectangle:"<<endl;
        cin>>a>>b;

    }
    void getArea()
    {
        cout<<"Area of Rectangle is :"<<a*b<<endl;

    }
};

int main()
{
    Area a;
    setDim();
    getArea();
    cout << "Hello world!" << endl;
    return 0;
}
