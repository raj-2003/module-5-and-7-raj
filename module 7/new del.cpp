#include <iostream>
using namespace std;

int main()
{
   int *p1, *p2, sum;
   p1=new int;
   p2= new int;
   cout<<" Enter first value :";
   cin>>*p1;
    cout<<" Enter second value :";
   cin>>*p2;
   sum = *p1 + *p2;
   cout<<" Sum of values = "<<sum<<endl;
   delete p1;
   delete p2;
}
