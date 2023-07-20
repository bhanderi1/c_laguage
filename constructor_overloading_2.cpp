#include<iostream>
using namespace std;
class solid_shape
{
  public:
  solid_shape(int l,int w,int h)
  {
    cout<<"shape rectangular:"<<l*w*h<<endl;
  }

  solid_shape(int a)
  {
     cout<<"shape cube:"<<a*a*a<<endl;
  }

  solid_shape(double r,double h)
  {
      cout<<"shape cylinder:"<<3.14*r*r*h<<endl;
  }

  solid_shape(int b,int h)
  {
      cout<<"shape prism:"<<b*h<<endl;
  }
};


int main()
{
    solid_shape(4,9,2),solid_shape(3),solid_shape(3.2,2.8),solid_shape(6,12);
}