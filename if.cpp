#include <iostream>
using namespace std;
int main() {
int liczba ;
cout<<"podaj liczbę a powiem czy jest czy dodatnia ujemna"<<endl;
cin>>liczba;
cout << "Liczba = " << liczba << endl;
string znak;
// Zastosowanie instrukcji warunkowych:
if (liczba > 0) znak = "dodatnia";
else if(liczba<0) znak="ujemna";
else znak="zero";
cout << "Znak liczby: " << znak << endl;
return 0;
}