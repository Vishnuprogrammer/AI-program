#include <iostream>
using namespace std;
int main()
{
    int generatorswitch=0,power;
    cout<<"Control room"<<"\n\n";
     cout <<"AI sensing control room"<<"\n\n";
     cin>>power;
     cout<<"Sensing input power"<<"\n\n";

   if(power!=0)
   {
    cout <<"AI sensing control room" <<"\n\n";
   cout<<"Power available"<<"\n\n";
    cout<<"Generator OFF"<<"\n\n";
    generatorswitch=0;
    cout<<"generatorswitch mode :"<<generatorswitch<<"\n\n";
    cout<<"AC working-Temperature normal"<<"\n\n";
    }
    else if(power==0)
        {
         cout <<"AI sensing control room"<<"\n\n";
   cout<<"Power not available"<<"\n\n";
     cout<<"AC not working-Temperature high"<<"\n\n";
    generatorswitch=generatorswitch+1;
     cout<<"generatot switch on"<<"\n\n";

     cout<<" generatorswitch mode :"<<generatorswitch<<"\n\n";
     cout<<"AC working-Temperature normal"<<"\n\n";
    }
    return 0;
}

