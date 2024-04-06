//Binary operator overloading using member function

#include<iostream>
using namespace std;

class A
{
	int a,b;
	public:
		A(int i,int j)
		{
			a=i; b=j;
		}
		void show()
		{
			cout<<"a="<<a<<"   "<<"b="<<b<<endl;
		}
	A operator +(A obj)
	{
		A obj2(0,0);
		obj2.a=a+obj.a;
		obj2.b=b+obj.b;
		return obj2;
    }	
		
};
int main()
{
	A x(10,20),y(30,40), z(0,0);
	z=x+y;
	z.show();
	
	return 0;
}
