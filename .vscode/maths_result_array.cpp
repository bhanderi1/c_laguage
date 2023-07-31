#include<iostream>
using namespace std;
class result
{
    int maths,sci,guj,total;
    float per;
    public:
    void subject()
    {
        cout<<"\tenter maths marks:";
        cin>>maths;
        cout<<"\tenter sci marks:";
        cin>>sci;
        cout<<"\tenter guj marks:";
        cin>>guj;
    }
    void getdata()
    {
        total=maths+sci+guj;
        cout<<"\ttotal marks:"<<total<<endl;
    }
    void percent()
    {
        per=total*100/300;
        cout<<"\tper:"<<per<<endl;
    }
    
};

int main()
{
   result a[3];
   int i;

    
   for(i=0; i<3; i++)
   {
     cout<<"student"<<i+1<<endl;
     a[i].subject();
   }

   for(i=0; i<3; i++)
   {
    cout<<"student "<<i+1<<endl;
    a[i].getdata();
    a[i].percent();
   }
    
}