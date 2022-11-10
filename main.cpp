#include <iostream>
using namespace std;

int main(){
//Qui vanno definite le variabili
  float a;
  float b;
  float c;
  cout << "Inserisci le variabili a,b,c" << endl;
  cout << "a: ";
  cin >> a;
  cout << "b: ";
  cin>> b;
  cout << "c: ";
  cin >> c;

//Qui va scritto il codice per eseguire i calcoli richiesti
  cout<< "Area del triangolo: ";
  cout<< (a*b)/2 <<endl;
  cout<<"Area del quadrato: ";
  cout<< a*a <<endl;
  cout<< "Area del rettangolo: ";
  cout<< a*b <<endl;
  cout<< "Area del trapezio: ";
  cout<< (((a+b)*c)/2) <<endl;
return 0;
}
