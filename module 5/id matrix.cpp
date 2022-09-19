#include<iostream>
using namespace std;

class Matrix
{
        int a[3][3];
        
    public:
    	
        void accept();
        void display();
        void operator +(Matrix b);
};
void Matrix::accept()
{
        cout<<"\n Enter Element : \n";
        for(int i=0; i<3; i++)
        {
                for(int j=0; j<3; j++)
                {
                        cout<<" ";
                        cin>>a[i][j];
                }
        }
}
void Matrix::display()
{
        for(int i=0; i<3; i++)
        {
                cout<<" ";
                for(int j=0; j<3; j++)
                {
                        cout<<a[i][j]<<"\t";
                }
                cout<<"\n";
        }
}
void Matrix::operator +(Matrix b)
{
        int sum[3][3];
        for(int i=0; i<3; i++)
        {
                for(int j=0; j<3; j++)
                {
                        sum[i][j]=a[i][j]+b.a[i][j];
                }
        }
        cout<<"\n Addition of Matrix : \n\n";
        for(int i=0; i<3; i++)
        {
                cout<<" ";
                for(int j=0; j<3; j++)
                {
                        cout<<sum[i][j]<<"\t";
                }
                cout<<"\n";
        }
}

int main()
{
        Matrix m,n;
        m.accept();      
        n.accept();      
        cout<<"\n First Matrix : \n\n";
        m.display();   
        cout<<"\n Second Matrix : \n\n";
        n.display(); 
        m+n; 
}


