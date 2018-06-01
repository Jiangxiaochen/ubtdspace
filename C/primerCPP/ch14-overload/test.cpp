#include "mycpp.h"
class Node  
{  
public:  
    double a;  
    int b;  
    char c;  
  
    Node(double a=0,int b=0,char c=0)  
    {  
        this->a=a;  
        this->b=b;  
        this->c=c;  
    }  
  
        //拷贝构造函数  
    //Node(const Node &n)  
    //{  
    //  a=n.a;  
    //  b=n.b;  
    //  c=n.c;  
    //}  
};  
  
Node& GetNode()  
{  
    Node str(10.0,2,'c');  
    return str;  
}  
  
int main()  
{  
    Node newnode=GetNode();   
    cout<<newnode.a<<" "<<newnode.b<<" "<<newnode.c<<endl;  
    return 0;  
}  
