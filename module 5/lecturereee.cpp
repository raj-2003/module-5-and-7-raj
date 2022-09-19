#include<iostream>
using namespace std;

class A
{
	public:
		int num;
		char lecturer[20], subject[20], course[20];
		
		void input()
		{
			cout<<"Enter name of the lecturer : ";
			cin.get(lecturer, 20);
			fflush(stdin);
			cout<<"Enter name of the subject : ";
			cin.get(subject, 20);
			fflush(stdin);
			cout<<"Enter name of  course : ";
			cin.get(course, 20);
			fflush(stdin);
			cout<<"Enter number of  lecturers : ";
			cin>>num;
			fflush(stdin);
		}
		
		void display()
		{
			cout<<" Name of the lecturer : " <<lecturer <<endl;
			cout<<" Name of the subject : " <<subject <<endl;
			cout<<" Name of course : " <<course <<endl;
			cout<<" Number of  lecturers : " <<num <<endl;
		}
		
};

int main()
{
	A obj[2];
	
	cout<<"\n\n---------------Enter details of 5 lecturer-------------\n\n";
	for(int i=0; i<2; i++)
	{
		
		cout<< endl <<"-----------Enter Lecturer[" << i+1 << "] details--------------"<<endl;
		obj[i].input();
	}
	
	for(int i=0; i<2; i++)
	{
		cout<< endl <<"Lecturer[" << i+1 << "] details "<<endl;
		obj[i].display();
	}
}
