#include<iostream>
using namespace std;
class base
{
    public:
    int a,i;
    void number()
    {
    cout<<"enter number:";
    cin>>a;
    }
};

class num : public base
{
  public:
  void get()
  {
    int sum;
    for(i=1; i<=a; i++)
    {
      sum=i*i;
      cout<<sum<<"\t";
    }
  }
};

int main()
{
  num n;
  n.number();
  n.get();
}