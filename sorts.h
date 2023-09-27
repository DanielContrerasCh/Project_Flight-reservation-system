#ifndef sort_h
#define sort_h
#include <vector>
#include "flights.h"
#include <fstream>

using namespace std;


class Sorts{
private:
  void swap(vector<Flights> &, int i, int j);

public:
  vector<Flights> sort(vector<Flights> &, int);
  vector<Flights> loadFile(const string &name);
  vector<Flights> destChoice(vector<Flights> &, string);
  
};

void Sorts::swap(vector<Flights> &v, int i, int j){
  Flights aux = v[i];
	v[i] = v[j];
	v[j] = aux;
} 

vector<Flights> Sorts::sort(vector<Flights> &v, int choice){
  int h = v.size() / 2;
  switch(choice){
    case 1:
    while (h > 0) {
      for (int i = h; i < v.size(); i++) {
        for (int j = i; j >= h && v[j].getPrice() < v[j - h].getPrice(); j -= h) {
          swap(v, j, j - h);
        }
      }
      h /= 2;
    }
    
    case 2:
      while (h > 0) {
        for (int i = h; i < v.size(); i++) {
          for (int j = i; j >= h && v[j].getMiles() < v[j - h].getMiles(); j -= h) {
            swap(v, j, j - h);
          }
        }
          h /= 2;
        }
      }  
  return v;
}

vector<Flights> Sorts::loadFile(const string &name){
  ifstream File(name);
  string origin;
  string dest;
  string skipline;
  int miles;
  float price;
  vector<Flights> flights;
  
  if(File.is_open())
{

    getline(File, skipline);

    while (File.good())
    {
      
      string temp;
      getline(File, origin, ',');

      getline(File, dest, ',');

      getline(File, temp, ',');
      miles = stoi(temp);

      getline(File, temp, '\n');
      price = stof(temp);
 
      Flights aux(origin, dest, miles, price);
      flights.push_back(aux);          
    }
}
else
{
    cout << "Error Message!" << endl;
}
File.close();
return flights;
}

// vector<Flights> Sorts::destChoice(vector<Flights> &v, string dest){
//   vector<Flights> temp (v.size());
//   for(int i = 0; i < v.size(); i++){
//     if(dest == v[i].getDest()){
//       temp.push_back(v[i]);
//     }
//   }
//   return temp;
// }
#endif // sorts_h
