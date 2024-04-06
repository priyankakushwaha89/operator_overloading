//unary operator overloading using member function

#include<iostream>
using namespace std;

class increment
{
	int a;
	public:
		increment(int i)
		{
			a=i;
		}
		void show()
		{
			cout<<"a="<<a<<endl;
		}
		void operator ++(int)
		{
			a=a+1;
		}
};
int main()
{
	increment x(8);
	x.show();
	x++;
	x.show();
	return 0;
}
