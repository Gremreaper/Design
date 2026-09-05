#include<iostream>
using namespace std;

class implementabs{
    private:
    int a,b;

    public:

    //implementation layer -> how it is implemented
    void set(int x,int y)
    {
        a=x;
        b=y;
    }

    void display()
    {
        cout<<"The values are:"<<a<<" "<<b<<endl;
    }
};

int main()
{
    //interface layer - > what is needed 
    implementabs obj;
    obj.set(10,20);
    obj.display();
}