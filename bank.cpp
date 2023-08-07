#include<iostream>
using namespace std;
class bank
{
    public:
    int acno;
    float deposit ,withdrow,display,abalance;
    float balnace=11000.10;
    string name;

    void account()
    {

        cout<<"please ! press key....\n\n";
        cout<<"enter your account number:";
        cin>>acno;

        cout<<"enter account holder name :";
        cin>>name;
        cout<<"-----------------------------------------------------";
    }

    void deposit_am()
    {
        cout<<"\t enter amount deposit:";
        cin>>deposit;

        abalance =balnace+deposit;
        cout<<"\n\t avalebale balance in your account :"<<abalance<<endl;

        cout<<"\n-----------------------------------------------------";
    }


     void withdrow_am()
    {
        cout<<"\t enter amount withdrow:";
        cin>>withdrow;

        if(balnace>=withdrow)
        {
           abalance -=withdrow;
           cout<<"\n\t avalebale balance in your account :"<<abalance<<endl;
        }
        else
        {
            cout<<"\n\t Sorry! less balnce in your account..........";
        }
        cout<<"\n-----------------------------------------------------";
   }


     void display_am()
     {
        cout<<"\n\t your account balance :"<<abalance<<endl;
        cout<<"\n-----------------------------------------------------";
     }
};

int main()
{
    bank b;
    b.account();
    int ch;
    cout<<"\n1. deposit amount.........";
    cout<<"\n2. withdrow amount.........";
    cout<<"\n3. display amount.........";
    cout<<"\n4. exit.........";

    do
    {
      cout<<"\n\t enter choice your number 1 to 4 : ";
      cin>>ch;

      switch (ch)
      {
      case 1:
          b.deposit_am();
        break;
      
      case 2:
          b.withdrow_am();
          break;

      case 3:
          b.display_am();
          break;

       case 4:
          break;

      default:
        cout<<"your number is wrong choice.........";
        break;
      }

    }
    while(ch!=4);
    
}