#include<iostream>
using namespace std;
class area
{
      public:
      area(double r)
      {
         cout<<"area of circle: "<<3.14*r*r<<endl;
      }

      area(int l)
      {
        cout<<"area of square: "<<l*l<<endl;
      }

      area(int l,int b)
      {
        cout<<"area of rectangle: "<<l*b<<endl;
      }

      area(double b,double h)
      {
        cout<<"area of triangle:"<<0.5*b*h<<endl;
      }

};

int main()
{
    area(6.0),area(7),area(6,8),area(9.6,8.9);
}