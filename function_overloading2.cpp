#include<iostream>
using namespace std;
class shape
{
  public:
  void solid_shape(int l,int w,int h)
  {
    cout<<"shape rectangular:"<<l*w*h<<endl;
  }

  void solid_shape(int a)
  {
     cout<<"shape cube:"<<a*a*a<<endl;
  }

  void solid_shape(double r,double h)
  {
      cout<<"shape cylinder:"<<3.14*r*r*h<<endl;
  }

  void solid_shape(int b,int h)
  {
      cout<<"shape prism:"<<b*h<<endl;
  }
};

int main()
{
    shape s;
    s.solid_shape(4,9,2);
    s.solid_shape(3);
    s.solid_shape(3.2,2.8);
    s.solid_shape(6,12);
}