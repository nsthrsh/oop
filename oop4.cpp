#include <iostream>
#include <string>
using namespace std;

class Person
{
protected:
    string name;
    int year;
    string gender;
public:
    Person(string name1, int year1, string gender1);
    Person();
    void input();
    void print();
        };


Person::Person(string name1, int year1, string gender1)
{
    name=name1;
    year=year1;
    gender=gender1;
}

Person::Person(){
	name=' ';
	year=0;
	gender=' ';
}

void Person::input() {
    cout<<"Name: "<<endl;
    cin>>name;
    cout<<"Year of birth: "<<endl;
    cin>>year;
    cout<<"Gender: "<<endl;
    cin>>gender;
}
void Person::print() {
    cout<<"Name: "<<name<<endl;
    cout<<"Year of birth: "<<year<<endl;
    cout<<"Gender: "<<gender<<endl;

}


class Employee: public Person
{
    int tabNumb;
    float endWork, startWork;
    string position;
public:
    Employee():Person() { tabNumb = 0; }
    ~Employee(){
	};

    Employee(int tabNumb1, float startWork1, float endWork1, string position1):Person(name, year, gender)
    {
	    tabNumb=tabNumb1;
        startWork=startWork1;
        endWork=endWork1;
        position=position1;
      }
      void input();
      void print();
      };

void Employee::input() {
    Person::input();
    cout<<"Time-board number: "<<endl;
    cin>>tabNumb;
    cout<<"Start of work: "<<endl;
    cin>>startWork;
    cout<<"End of work: "<<endl;
    cin>>endWork;
    cout<<"Position: "<<endl;
    cin>>position;
    cout<<endl;
}

void Employee::print() {
    Person::print();
    cout<<"Time-board number: "<<tabNumb<<endl;
    cout<<"Start of work: "<<startWork<<endl;
    cout<<"End of work: "<<endWork<<endl;
    cout<<"Position: "<<position<<endl;
}

int main()
{
    Person obj1;
    Employee obj2;
    obj2.input();
    
    obj2.print();
    return 0;
}

