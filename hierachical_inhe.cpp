#include<iostream>
using namespace std;
class base
{
    protected:
    int m;
    public:
    void setM(int a)
    {
        m=a;
    }
};

class derived1 :public base
{
    int n;
    public:
    void setN(int z)
    {
        n=z;
    }
    void product()
    {
        cout<<"product of m and n is:"<<m*n<<endl;
    }
};

class derived2 :public base
{
    int p;
    public:
    void setP(int z)
    {
        p=z;
    }
    void add()
    {
        cout<<"addition of m and p is:"<<m+p<<endl;
    }
};

int main()
{
    derived1 d;
    d.setM(15);
    d.setN(6);
    d.product();

    derived2 z;
    z.setM(10);
    z.setP(20);
    z.add();
}