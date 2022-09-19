#include<iostream>
using namespace std;

class bank
{
	public:
     float p,r,t,si,amount;
     

 public:
    void x( )
          {
                 cout <<" Enter Principle Amount :: ";
                 cin>>p ;
                 cout<<"\n Enter Rate of Interest :: ";
                 cin>>r;
                 cout <<"\n Enter Number of years :: ";
                 cin>>t;

                 si= (p *r*t) /100;
                 amount = si + p;

          }

    void display( )
         {
                cout<<"\n Entered Details are :: \n";
                cout<<"\n Principle Amount: "<<p;
                cout <<"\n\n Rate of Interest: "<<r;
                cout <<"\n\n Number of years: "<<t;
                cout <<"\n\n Interest : "<<si;
                cout <<"\n\n Total Amount : "<<amount<<"\n";
         }
};


int main ()
{
    bank b ;

    b.x();
    b.display();

    
}

