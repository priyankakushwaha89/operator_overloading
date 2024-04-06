//unary operator overloading using friend function

#include<iostream>
using namespace std;

class decrement
{
	 int a;
	 public:
	 	decrement(int i)
	 	{
	 		a=i;
		}
		void show()
		{
			cout<<"a="<<a<<endl;
		}
	friend void operator --(decrement &k);
};
void operator --(decrement &k)
{
	k.a=k.a-1;
}
int main()
{
	decrement x(9);
	x.show();
	--x;
	x.show();
	return 0;
	
}
