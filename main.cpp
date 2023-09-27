// Creado por Daniel Contreras Chávez A01710608
// el 21 de agosto del 2023

#include <iostream>
#include <fstream>
#include "flights.h"
#include "sorts.h"
#include "menu.h"
#include <vector>

using namespace std;

int main() {
  Sorts data;
  vector<Flights> flights;
  


  menu(flights, data);
  return 0;
}