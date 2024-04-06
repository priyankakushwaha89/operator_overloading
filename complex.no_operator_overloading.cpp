//WAP for adding two complex number using member function of BINARY OPERATOR OVERLOADING

#include<iostream>
using namespace std;

class complex
{
	int r,i;
	public:
		void data()
		{
			cout<<"enter the real and imaginary numbers"<<endl;
			cin>>r>>i;
		}
		void show()
		{
			cout<<r<<"+"<<i<<"i"<<endl;
		}
		complex operator +(complex &k)
		{
			complex m;
			m.r=r+k.r;
			m.i=i+k.i;
			return m;
		}
};
int main()
{
	complex x,y,z;
	x.data();
	y.data();
	z=x+y;
	z.show();
	
	return 0;
}
