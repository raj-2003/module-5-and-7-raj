#include<iostream>

using namespace std;

class Swap
{
	int temp,a,b;
	
	public:
		
		Swap(int a ,int b)
		{
			this->a = a;
			this->b = b;
		}
		
		friend void swap(Swap&);
};

void swap(Swap& s1)
{
	cout<<"Before swapping : "<<s1.a<<" "<<s1.b;
	
	s1.temp=s1.a;
	s1.a=s1.b;
	s1.b=s1.temp;
	
	cout<<"\nAfter swapping : "<<s1.a<<" "<<s1.b;
}

main()
{
	Swap s(10,12);
	swap(s);
}
