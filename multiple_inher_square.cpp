#include<iostream>
using namespace std;
class base1
{
    public:
    int a;
    void number1()
    {
        cout<<"enter number a:";
        cin>>a;
    }
};
class base2
{
  public:
  int b;
  void number2()
  {
    cout<<"enter number b:";
    cin>>b; 
  }
};

class derived : public base1,public base2
{
    public:
    int i,sum;

    void square()
    {
       for(i=a; i<=b; i++)
       {
        sum=i*i;
        cout<<sum<<"\t";
       }

    }
};

int main()
{
    derived d;
    d.number1();
    d.number2();
    d.square();
}