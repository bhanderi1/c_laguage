#include<iostream>
using namespace std;
class restaurants
{
    public:
    int mnumber,chinese=100,manchurian=110,dosa=30,sandwich=90,chpis=90,pizza=250,panipuri=20,soup=20,soda=20,qty,i;
    double total_bill=0;
    int totalbill[10];
    string cname;
    int discount,gst,cgst,sgst;
    string a[10];
  
    int b[10],c[10];

    void menu()
    {
     cout<<"********************************************************************\n"<<endl;
     cout<<"\t\tGANESH HOTEL & RESTAURANT     \n";
     cout<<"\n********************************************************************\n"<<endl;
     cout<<"\t============================WELCOME=========================================\t\n "<<endl;
     cout<<"-------------------- menu-------------------- \t\t\n"<<endl;
     cout<<"No.     iteam             prise\n "<<endl;

     cout<<"1.     chinese      =     "<<chinese<<endl;
     cout<<"2.     manchurian   =     "<<manchurian<<endl;
     cout<<"3.     dosa         =     "<<dosa<<endl;
     cout<<"4.     sandwich     =     "<<sandwich<<endl;
     cout<<"5.     chips        =     "<<chpis<<endl;
     cout<<"6.     pizza        =     "<<pizza<<endl;
     cout<<"7.     panipuri     =     "<<panipuri<<endl;
     cout<<"8.     soup         =     "<<soup<<endl;
     cout<<"9.     soda         =     "<<soda<<endl;
     cout<<"10.    exit   "<<endl;

    }
    

   void customer()
   {
    cout<<"enter customer name : ";
    cin>>cname;

    cout<<"enter customer mobile number : ";
    cin>>mnumber;
   } 


   void order()
   {
      int  ch;
     
      cout<<"**------------------------please order-----------------------------**\n"<<endl;

      do
      {
         cout<<"enter order dish number:";
         cin>>ch;

         switch (ch)
         {
         case 1:
              cout<<"enter qty :";
              cin>>qty;
              totalbill[0] =chinese*qty;
              cout<<"\t chinese\t"<<chinese<<"\t"<<qty<<"\t"<<totalbill[0]<<endl;
        
              total_bill +=totalbill[0];
              a[0]="chinese ";
              b[0]=qty;
              c[0]=chinese;
            break;

         case 2:
              cout<<"enter qty :";
              cin>>qty;
              totalbill[1] = manchurian*qty;
              cout<<"\t manchurian\t"<<manchurian<<"\t"<<qty<<"\t"<<totalbill[1]<<endl;
              
             total_bill += totalbill[1];
              a[1]="manchurian ";
              b[1]=qty;
              c[1]=manchurian;
           break;

         case 3:
              cout<<"enter qty :";
              cin>>qty;
              totalbill[2] = dosa*qty;
              cout<<"\t dosa \t\t"<<dosa<<"\t"<<qty<<"\t"<<totalbill[2]<<endl;

             total_bill += totalbill[2];
             a[2]="dosa    ";
             b[2]=qty;
             c[2]=dosa;
            break;
            
          case 4:
              cout<<"enter qty :";
              cin>>qty;
              totalbill[3] = sandwich*qty;
              cout<<"\t sandwich \t"<<sandwich<<"\t"<<qty<<"\t"<<totalbill[3]<<endl;

              total_bill +=totalbill[3];
              a[3]="sandwich";
              b[3]=qty;
              c[3]= sandwich;
              break;

          case 5:
              cout<<"enter qty :";
              cin>>qty;
              totalbill[4]= chpis*qty;
              cout<<"\t chips \t\t"<<chpis<<"\t"<<qty<<"\t"<<totalbill[4]<<endl;

              total_bill +=totalbill[4];
              a[4]="chips   ";
              b[4]=qty;
              c[4]=chpis;
              break; 
              
         case 6:
              cout<<"enter qty :";
              cin>>qty;
              totalbill[5]= pizza*qty;
              cout<<"\t pizza \t\t"<<pizza<<"\t"<<qty<<"\t"<<totalbill[5]<<endl;

              total_bill +=totalbill[5];
              a[5]="pizza   ";
              b[5]=qty;
              c[5]=pizza;
              break;

          case 7:
              cout<<"enter qty :";
              cin>>qty;
              totalbill[6]= panipuri*qty;
              cout<<"\t panipuri \t"<<panipuri<<"\t"<<qty<<"\t"<<totalbill[6]<<endl;

              total_bill+=totalbill[6];
              a[6]="panipuri ";
              b[6]=qty;
              c[6]=panipuri;
              break;
      
          case 8:
              cout<<"enter qty :";
              cin>>qty;
              totalbill[7] = soup *qty;
              cout<<"\t soup \t\t"<<soup<<"\t"<<qty<<"\t"<<totalbill[7]<<endl;

              total_bill+=totalbill[7];
              a[7]="soup      ";
              b[7]=qty;
              c[7]=soup;
              break;
      
          case 9:
              cout<<"enter qty :";
              cin>>qty;
              totalbill[8] = soda*qty;
              cout<<"\t soda \t\t"<<soda<<"\t"<<qty<<"\t"<<totalbill[8]<<endl;

              total_bill +=totalbill[8];
              a[8]="soda     ";
              b[8]= qty;
              c[8]= soda;
              break;
      
            case 10:
              break;
         
         default:
           cout<<"sorry ! this dish is not avalbile choose any dish "<<endl;
            break;
         }
      } while (ch!=10);

    
  
   }

     void bill()
       {     
      cout<<"-----------------------------BILL---------------------------------\n"<<endl;
      cout<<"dish iteam\t\tprice\tqty \t total "<<endl;
      cout<<"-------------------------------------------------------------------\n"<<endl;

      for( i=0;i<10;i++)
		{
        if(!a[i].empty())

			cout<<a[i]<<": \t\t"<<c[i]<<"\t"<<b[i]<<"\t "<<totalbill[i]<<endl;

		}
    
      }

     void net_bill()
     {

      //discount 10% in total bill

      discount =(total_bill*10)/100;
      cout<<"discount (10%)  :\t\t\t "<<discount<<endl;


      //gst add in total_bil

      cgst =(total_bill*2.5)/100;
      cout<<"cgst(2.5 %)  :\t\t\t\t "<<cgst<<endl;

      sgst =(total_bill*2.5)/100;
      cout<<"sgst(2.5%)   :\t\t\t\t "<<sgst<<endl;

      //user payment total bill

      total_bill -= discount;
      gst = cgst+sgst;
      total_bill += gst;

      cout<<"=========================================================================\n";
      cout<<"your payment bill:\t\t\t"<<total_bill<<endl;
     }         

};

int main()
{
   restaurants r;
   r.menu();
   r.customer();
   r.order();
   r.bill();
   r.net_bill();

     cout<<"****************** THANK YOU FOR VISITING  ********************************";
      
}