#include <iostream.h> 
class A 
{ 
	public:  
		A(); 
		A(int i,int j); 
		~A()
		{
			cout<<a<<"Donstructor.\n";
		}  
	void print(); 
	private:  
		int a,b; 
}; 
A::A() 
{ 
	a=b=10;
	cout<<"Default constructor.\n";
} 
	A::A(int i,int j) 
{ 
	a=i,b=j;
	cout<<"Constructor.\n";
} 
void A::print() 
{
	cout<<"a="<<a<<",b="<<b<<endl;
} 
void main()
{
	A m,n(15,18);  
	m.print();  
	n.print();
}  
