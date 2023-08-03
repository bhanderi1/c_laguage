#include<iostream>
using namespace std;
class base
{
    public:
    int a;
    void number()
    {
        cout<<"enter value:";
        cin>>a;
    }
};

class test : public base
{
    public:
    int fact=1,i;
    void facorial()
    {
        for(i=a; i>=1; i--)
        {
            fact*=i;
        }
        cout<<fact<<"\t";
    }
};

int main()
{
    test t;
    t.number();
    t.facorial();
}