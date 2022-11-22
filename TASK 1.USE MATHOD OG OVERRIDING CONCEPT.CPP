#include<iostream>

using namespace std;

class A{
    
    public:
    
    void print(){
        
        cout<<"class A"<<endl;
        
        
     }
    
};
class B:public A{
    public:
    
    void print(){
        
        cout<<"class B"<<endl;
        
         }
    
};


main(){
    
    B obj;
    
    obj.print();
    obj.A::print();
    
}
