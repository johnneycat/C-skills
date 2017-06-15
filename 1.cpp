#include <iostream>

using namespace std;

class BASE{
public:
	BASE(int k)
	{
		cout<<"this is base"<<endl;
		func();
		i = k;
		cout<<i<<endl;
	}

	void func()
	{
		cout<<"this is func"<<endl;
	}
	int i;
	int j = 20;
};

class CHILD: public BASE
{
public:
	CHILD():BASE(100)
	{
		
		cout<<"this is child"<<endl;
		
		
		func();
		cout<<i<<endl;
	}

	void func()
	{
		cout<<"this is funcd"<<endl;
		j = 30;
	}
	~CHILD(){};
	
};

int main()
{
	CHILD child;
	return 0;
}
