/* Fkt_MAX.CPP
   Das untenstehende Programmger�st ist so zu vervollst�ndigen, dass die 
   Funktion "max" die gr��ere zweier von der main-Funktion �bergebener Zahlen 
   ermittelt und an die main-Funktion zwecks Ausgabe zur�ckgibt. 
   a) Der Fall, dass in main zwei gleiche Zahlen eingegeben werden, soll 
      zun�chst unber�cksichtigt bleiben.
   b) �ndere das Programm dahingehend ab, dass auch dann ein sinnvoller 
      Programmablauf erfolgt, wenn beide Zahlen gleich gro� sind.
      In diesem Fall soll ausgegeben werden: Beide Zahlen sind gleich gro�!
*/

#include <iostream>
#include <conio.h>
using namespace std;

int max (int x, int y)
{
   if (x>y){
   	return x;
   } else if (x == y){
   	return -1;
   }else {
   	return y;
   }
}

int main() {
   int x, y, ergebnis;

   cout << "ZAHLENVERGLEICH\n";
   cout << "Erste Zahl:  ";
   cin >> x;
   cout << "Zweite Zahl: ";
   cin >> y;

   ergebnis = max(x, y);
        if (ergebnis == -1){
        	cout << "Beide Zahlen sind gleich gro�.";
		} else {
		cout << "Die groessere der beiden Zahlen ist die Zahl "
        << ergebnis;	// Funktionsaufruf	
		}

   getch();
   return 0;
}

