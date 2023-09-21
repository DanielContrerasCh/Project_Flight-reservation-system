#include <iostream>
#include <fstream>
#include "flights.h"
#include "sorts.h"
#include <vector>

using namespace std;

int main() {
  Sorts sorted;
  vector<Flights> flights;
  flights = sorted.loadFile("dataset.csv");
  sorted.sort(flights);
  
  for(int i = 0; i < flights.size(); i++){
    cout<< i + 1 <<")"; flights[i].showInfo(); cout<<endl;
  }
}