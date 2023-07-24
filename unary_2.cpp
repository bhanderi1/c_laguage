#include<iostream>
using namespace std;
class number{
    int real ,img;
    public:
    void setdata(int a,int b)
    {
        real =a,img =b;
    }
    void getdata()
    {
        cout<<"number is:"<<real<<" + "<<img<<"i"<<endl;
    }
    number operator--(int)
    {
        number t;
        t.real =real--;
        t.img =img--;
        return t;
    }   
    number operator++(int)
    {
        number p;
        p.real =real++;
        p.img =img++;
        return p;
    }
    number operator++()
    {
        number d;
        d.real =++real;
        d.img =++img;
        return d;
    }

    number operator--()
    {
        number e;
        e.real =--real;
        e.img =--img;
        return e;
    }
};

int main()
{
    number n,m;
    n.setdata(5,7);
    n.getdata();
    n--;
    m=n;
    m.getdata();

    n++;
    m=n;
    m.getdata();

    m = ++n;
    m.getdata();

    m = --n;
    m.getdata();
}