#include <iostream>
using namespace std;


main()
{
	int num;

    cout<<"Table multiplication by ";
    cin>>num;
    cout<<endl;
    
    for (int i=1; i<=10; i++)
    {
	if(i<10){
        cout<<i<<" * "<<num<<" = "<<i*num<<endl;
}   else
        cout<<i<<"* "<<num<<" = "<<i*num<<endl;
    }

 return 0;
}
