#include<iostream>
using namespace std;

class a
{
	public:
		inline float mul(float x,float y)
		{
				return(x*y);	
		}
		inline float cube(float x) 
		{
				return(x*x*x);
		}
		
};

main()
{
	a obj;
	float val1,val2;
	cout<<"Enter two value : ";
	cin>>val1>>val2;
	cout<<"\nmultiplication value  : " <<obj.mul(val1,val2);
	cout<<"\ncube value : " <<obj.cube(val1)<<"\n"<<obj.cube(val2);
}
