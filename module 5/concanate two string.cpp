#include<iostream>
#include<string.h>

using namespace std;

class abc
{
	public:
		char s1[20], s2[20];
		
		abc(char str1[], char str2[])
		{
			strcpy(this->s1, str1);
			strcpy(this->s2, str2);
		}
		
		void operator+()
		{
			cout<<"concatenate : "<<strcat(s1 ,s2);
		}
			
};

main()
{ 
	char str1[]="raj";
	char str2[]="jay";
	
	abc a1(str1 , str2);
     +a1;
}
