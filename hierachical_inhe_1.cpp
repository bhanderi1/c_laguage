#include<iostream>
using namespace std;
class base
{ 
   public:
   int a;
   void set1()
   {
     cout<<"enter number:";
     cin>>a;
   }
};

class derived1:public base
{
    public:
    int product,i;
    void clu()
    {
    for(i=1; i<=10; i++)
    {
        product=a*i;
        cout<<a<<"* "<<i<<"= "<<product<<endl;
    }
 }
};
class derived2 :public base
{
    public:
    int r;
    void reverse()
    {
     int i=1;
     for(i=0; a!=0; i++)
     {
        r=a%10;
        a=a/10;
        cout<<r; 
     }
    }
};

int main()
{
    derived1 d;
    d.set1();
    d.clu();

    derived2 x;
    x.set1();
    x.reverse();
    
}
