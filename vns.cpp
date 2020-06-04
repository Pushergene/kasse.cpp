#include <iostream>
using namespace std;

 void Geldzurueck(double geld, double preis) {
  double geldzurueck;
  if(geld < preis) {
      double geldzurueck = preis - geld;
      cout << "Dir fehlen: " << geldzurueck;
  }
  else if(geld > preis) {
    double geldzurueck = geld - preis;
    cout << "Du erhaelts " << geldzurueck << endl;
  }
  else {
    cout << "Verpiss dich." << endl;
  }
}
