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
    //这样才能正确构造
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
    //需要这样才能调用父类中的方法
    child.BASE::func();
    return 0;
}
