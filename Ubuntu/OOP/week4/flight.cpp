//Author Name:Al-Fareed
//Reg No.:210970049
//Date of Creation:24-Dec-21
//Name of Program:Program to store details and calculate fuel of flight and store flight details
//----------------------------------------------------------------------------------
#include<iostream>
using namespace std;
class flight
{
   int flight_number;
   char dest[101];
   float distance;
   float fuel;
   void calculate_fuel()
   {
      if(distance<=1000){
          fuel=500;
      }
      if(distance>1000&&distance<=2000)
      {
          fuel=1100;
      }
      if(distance>2000){
          fuel=2200;
      }
   }
   public :
   flight(){
       distance=500.0;
   }
   void information_entry()
   {
       cout<<"Enter the flight number:";
       cin>>flight_number;
       cout<<"Enter the destination: ";
       cin>>dest;
       cout<<"Emter the distance:";
       cin>>distance;
       calculate_fuel();
       cout<<'\n';

   }

   void display_info()
   {
       cout<<"Flight number : "<<flight_number<<'\n';
       cout<<"Destination    : "<<dest<<'\n';
       cout<<"Distance       : "<<distance<<'\n';
       cout<<"Fuel           : "<<fuel<<endl;
   }

};
int main()
{
    flight f;
    f.information_entry();
    f.display_info();
    return 0;
}
