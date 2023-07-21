#include<iostream>
using namespace std;
class shape_area
{
      public:
      void area(double r)
      {
         cout<<"area of circle: "<<3.14*r*r<<endl;
      }

      void area(int l)
      {
        cout<<"area of square: "<<l*l<<endl;
      }

      void area(int l,int b)
      {
        cout<<"area of rectangle: "<<l*b<<endl;
      }

      void area(double b,double h)
      {
        cout<<"area of triangle:"<<0.5*b*h<<endl;
      }

};

int main()
{
   shape_area a;
   a.area(6.0);
   a.area(7);
   a.area(8,6);
   a.area(9.6,8.9);
}