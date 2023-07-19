#include<iostream>
using namespace std;
class report
{
    private:
    int adno,i;
    char name[20];
    float marks[5],average,sum=0;

    void getavg()
    {
        for(i=0; i<5; i++)
        {
            sum+=marks[i];
        }
        average=sum/5;
    }

    public:

    void readinfo()
    {
        cout<<"enter admine no:";
        cin>>adno;
        cout<<"enter name:";
        cin>>name;
        cout<<"enter 5 subject marks:";
        for(i=0; i<5; i++)
        {
            cin>>marks[i];
        }
        getavg();
    }

    void displayinfo()
    {
          cout<<"admission number:"<<adno<<endl;
          cout<<"name:"<<name<<endl;
           for(i=0; i<5; i++)
           {
            cout<<marks[i]<<endl;
           }
         cout<<"average:"<<average<<endl;
    }

};

int main()
{
    report m;
    m.readinfo();
    m.displayinfo();
}