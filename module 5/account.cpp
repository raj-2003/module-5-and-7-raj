#include<iostream>
using namespace std;
class Bank
{

public:
char name[20];
char account_type[20];
int account_number,balance;


void initialize()
{
	cout<<"Enter Account Holders Name:";
	cin>>name;
	cout<<"\nEnter Account type:";
	cin>>account_type;
	cout<<"\nEnter account number:";
	cin>>account_number;
	cout<<"\nEnter balance to deposit:";
	cin>>balance;
}

void deposit()
{
	int bal;
	cout<<"\nEnter the amout to deposit:";
	cin>>bal;
	balance+=bal;
	cout<<"\nAmount deposited successfuly\nYour New Balance:"<<balance;
}

void check()
{
	int bal;
	cout<<"\nYour balance :"<<balance<<"\nEnter amount to withdraw:";
	cin>>bal;
	if(bal<=balance)
	{
		balance-=bal;
		cout<<"\nRemaining Balance:"<<balance;
	}
	else
	{
		cout<<"\n Your balance not valid";
	}
}


void display()
{
	cout<<"\n Name :";
	cin>>name;
	cout<<"\n Account :"<<account_type;
	cout<<"\n Balance :"<<balance;
}
};

int main()
{
	int i;
	
	Bank obj;
	obj.initialize();
	cout<<"\n1. Your Information\n2. Deposit\n3. Withdraw\nEnter your choice\n";
	cin>>i;
	if(i==1)
	{
		obj.display();
	}
	else if(i==2)
	{
		obj.deposit();
	}
	else if(i==3)
	{
		obj.check();
	}
}
