#include<iostream>
using namespace std;
class flight
{
    private:
    int flight_number;
    char destination[20];
    float distance,fuel;

    void calfuel()
    {
        if(distance<=1000)
        {
             fuel=500;
        }
        else if(distance>=1000 && distance<=2000)
        {
            fuel=1100;
        }
        else
        {
              fuel=2200;
        }
    }

    public:
    int feesinf()
    {
        cout<<"enter flight number:";
        cin>>flight_number;
        cout<<"enter destination:";
        cin>>destination;
        cout<<"enter distance:";
        cin>>distance;

        calfuel();
    }
    int showinf()
    {
       cout<<"filght number: "<<flight_number<<"\t "<<"destination: "<<destination<<"\t "<<"distance: "<<distance<<"km"<<"\t "<<"fuel: "<<fuel<<"\t"<<endl;
    }
};

int main()
{
    flight f;
    f.feesinf();
    f.showinf();
}