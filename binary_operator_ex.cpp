#include<iostream>
using namespace std;
class box{
    int l,w,h;
    public:
    void setdata(int a,int b,int c)
    {
        l=a,w=b,h=c;
    }
    int getdata()
    {
        return l*w*h;
    }

    box operator/(box &n)
    {   
        box t;
        t.l =l/n.l;
        t.w =w/n.w;
        t.h =h/n.h;
        return t;
    }
};
int main()
{
    box a,b,c,d;
    a.setdata(5,5,5);
    cout<<"volum of box A is:"<<a.getdata()<<endl;
    b.setdata(3,3,3);
    cout<<"volum of box B is:"<<b.getdata()<<endl;
    c=a/b;
    cout<<"volum of box C is:"<<c.getdata()<<endl;
}
    