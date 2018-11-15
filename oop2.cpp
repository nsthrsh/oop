#include <iostream>
using namespace std;

class tollboth
{ private:
       int null,pcar,npcar;
       float tax;
public:
       tollboth()
       {
              tax=0;
              pcar=0;
              npcar=0;
              null=0;
       }
       void payCar(){
       pcar=pcar+1;
       for(null;null<=pcar;null++)
       {
              tax=tax+0.50;
       }}
       
       void nopayCar(){
       npcar=npcar+1;
       }
       
       void display(){
       cout<<"Total number of payed cars: "<<pcar<<endl;
       cout<<"Total tax: "<<tax<<endl;
       cout<<"Total number of not payed cars: "<<npcar<<endl;
     }
};



int main()
{
       tollboth tb;
       char press,input;
       int a,b;
 do{
     
       cout<<"Press 1 for car pay tax"<<endl;
       cout<<"Press 2 for car not pay tax"<<endl;
       cout<<"Press 3 for total tax and Exit"<<endl;
       cin>>press;

       switch(press)
       {
       case '1':
              {
                     tb.payCar();
                     break;
              }
       case '2':
              {
                     tb.nopayCar();
                     break;
              }  
	    case '3':
              {
                     tb.display();
                     break;
              }   
       }
       cout<<"Press c to continue and t for terminate"<<endl;
       cin>>input;
       }
       while(input=='c');
       tb.display();
    return 0;
}
