#ifndef flights_h
#define flights_h

#include <iostream>
using namespace std;

class Flights {
private:
  string origin;
  string dest;
  int miles;
  float price;

public:
  Flights(string _origin, string _dest, int _miles, float _price) {
    origin = _origin;
    dest = _dest;
    miles = _miles;
    price = _price;
  }

  string getOrigin() { return origin; }

  string getDest() { return dest; }

  int getMiles() { return miles; }

  float getPrice() { return price; }

  void showInfo(); 
};

void Flights::showInfo(){
    cout << " Origen: " << getOrigin() << endl;
    cout << "   Destino: " << getDest() << endl;
    cout << "   Millas: " << getMiles() << endl;
    cout << "   Precio: " << getPrice() << endl;
}
#endif // flights_h