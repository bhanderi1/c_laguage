#include<iostream>
using namespace std;
class readdata
{
    private:
    int bcode,innings,notout,runs,batavg;
    char bname[20];

    int calcavg()
    {
        return runs/(innings-notout);
    }

    public:
    readdata()
    {
      cout<<"enter bcode:";
      cin>>bcode;
      cout<<"enter bname:";
      cin>>bname;
      cout<<"enter innings:";
      cin>>innings;
      cout<<"enter notout:";
      cin>>notout;
      cout<<"enter runs:";
      cin>>runs;

     batavg=calcavg();
    
    }
    
    int displaydata()
    {
       cout<<"batsman code"<<"\t"<<"batsman name"<<"\t"<<"innings"<<"\t"<<"notout"<<"\t"<<"runs"<<"\t"<<"calcavg"<<endl;
       cout<<bcode<<"\t\t"<<bname<<"\t\t"<<innings<<"\t"<<notout<<"\t"<<runs<<"\t"<<batavg<<endl;
    }
};

int main()
{
    readdata run;
    run.displaydata();
}
