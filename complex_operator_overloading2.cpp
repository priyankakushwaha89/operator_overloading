//WAP for adding two complex number using friend function of binary operator overloading

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
		friend complex operator +(complex &l,complex &k);
};
		complex operator +(complex &l,complex &k)
		{
			complex m;
			m.r=l.r+k.r;
			m.i=l.i+k.i;
			return m;
		}
int main()
{
	complex x,y,z;
	x.data();
	y.data();
	z=x+y;
	z.show();
	
	return 0;
}
