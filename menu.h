#include "flights.h"
#include <vector>
#include <iostream>
#include "sorts.h"

using namespace std;

int menu(vector<Flights> flights, Sorts data){

  int choice;
  
  cout<<"-------------------"<<endl;
  cout<<"|       Menu      |"<<endl;
  cout<<"-------------------"<<endl;
  cout<<"Welcome to the flight reservation system"<<endl;
  cout<<"What would you like to do?"<<endl;
  cout<<"1) Check flights"<<endl;
  cout<<"2) Check reservations"<<endl;
  cout<<"3) Cancel a reservation"<<endl;
  cin>>choice;
  switch(choice){
    case 1:
      flights = data.loadFile("dataset.csv");
      cout<<"How would you like your flights sorted?"<<endl;
      cout<<"1) By price"<<endl;
      cout<<"2) By mileage"<<endl;
      cin>>choice;
      cout<<endl;
      if(choice == 1){
        cout<<"data sorted by price"<<endl;
        data.sort(flights, choice);
        for(int i = 0; i < flights.size(); i++){
        cout<< i + 1 <<")"; flights[i].showInfo(); cout<<endl;
        }
      }
      else if(choice == 2){
        cout<<"data sorted by miles"<<endl;
        data.sort(flights, choice);
        for(int i = 0; i < flights.size(); i++){
        cout<< i + 1 <<")"; flights[i].showInfo(); cout<<endl;
        }
      }
    break;
  }

  // switch(choice){
  //   case 1:
  //   cout<<"What's your destination?"<<endl;
  //   cout<<"1) LAX"<<endl;
  //   cout<<"2) ORD"<<endl;
  //   cout<<"3) PHL"<<endl;
  //   cin>>choice;
  //   switch(choice)
  //     case 1:
  //     for(int i = 0; i < flights.size(); i++){
        
  //     }
  // }
  
return 0;  
}