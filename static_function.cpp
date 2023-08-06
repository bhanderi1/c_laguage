#include<iostream>
using namespace std;
class test
{
  public:
  static int a;
  test()
  {
    cout<<"test class called....."<<endl;
    a++;
  }

  static int hello()
  {
    return 0;
  } 
};

int test::a=11;

int main()
{
    cout<<"inital stage:"<<test::hello()<<endl;
    test t,a,s,d,f;
    cout<<"final stage:"<<test::hello()<<endl;
}