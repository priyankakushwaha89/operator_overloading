//Binary operator overloading using friend function

#include<iostream>
using namespace std;

class plus
{
	int a,b;
	public:
		plus(int i,int j)
		{
			a=i; b=j;
		}
		void show()
		{
			cout<<"a="<<a<<"   "<<"b="<<b<<endl;
		}
		friend plus operator +(plus &k,plus &l);
};
plus operator +(plus &k,plus &l)
{
	plus m;
	m.a=k.a+l.a;
	m.b=k.b+l.b
	return m;
}

int main()
{
	plus x(10,20),y(20,30),z(0,0);
	z=x+y;
	z.show();
	return 0;
}
