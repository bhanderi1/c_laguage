#include<iostream>
using namespace std;
class takedata
{
    private:
    int admno;
    char name[20];
    float eng,maths,sci,total;
    float ctotal()
    {
        return eng+maths+sci;
    }
    public:
    takedata()
    { 
        cout<<"enter admin number:";
        cin>>admno;
        cout<<"enter name:";
        cin>>name;
        cout<<"enter marks eng:";
        cin>>eng;
        cout<<"enter marks maths:";
        cin>>maths;
        cout<<"enter marks sci:";
        cin>>sci;
        total=ctotal();
    }

    int showdata()
    {
        cout<<"admno"<<"\t"<<"name"<<"\t"<<"eng"<<"\t"<<"maths"<<"\t"<<"sci"<<"\t"<<"total"<<endl;
        cout<<admno<<"\t"<<name<<"\t"<<eng<<"\t"<<maths<<"\t"<<sci<<"\t"<<total<<endl;
    }
};

int main()
{
    takedata test ;
    test.showdata();
}

