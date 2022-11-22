#include<iostream>

using namespace std;

class A{
    
    public:
    
    void DATA(){
        
        cout<<"defult "<<endl;
        
        
     }

    
    void DATA(int a){
        
        cout<<"parameter "<<a<<endl;
        
         }
    
   void DATA(int a,int b){
        
        cout<<"parameter "<<a<<","<<b<<endl;
        
         }
};

main(){
    
    A obj;
    
    obj.DATA();
    obj.DATA(20);
    obj.DATA(1,9);
    
}

