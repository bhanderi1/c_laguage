#include<iostream>
using namespace std;
class  large
{
    int a,b;
    friend void add(large);

    public:

    void setdata()
    {
      cout<<"enter a:";
      cin>>a;

      cout<<"enter b:";
      cin>>b;
    }
};

void add(large x)
{
  if(x.a>x.b)
    cout<<"large number:"<<x.a;

  else
    cout<<"large number:"<<x.b;
}

int main()
{
  large x;
  x.setdata();
  add(x);
}