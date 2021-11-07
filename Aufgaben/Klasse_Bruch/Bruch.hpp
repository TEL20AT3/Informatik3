#ifndef BRUCH_HPP
#define BRUCH_HPP
#include <iostream>

/*
* Die Klasse Bruch definiert einen neuen Datentyp.
* Durch die Definition/Überladung der Standard-Operatoren wird es möglich
* Brüche einfach zu addieren, multiplizieren etc.
*/
class Bruch
{
	int _z, _n; // private Membervariablen Zähler und Nenner

public: // die folgenden Methoden sind public
	Bruch(int z=0, int n=1); // Konstruktor mit Default-Parametern
	operator double();         // Ermöglicht die Typkonvertierung in double
	void kuerzen();            // Methode zum kürzen des Bruchs

private: // die folgenden Methoden sind private
	static int ggT(int a, int b); // sucht den größten gemeinsamen Teiler

   /*
   * Als Methoden der Klasse
   */
	Bruch operator*(Bruch b);    // Multiplikation
	Bruch operator/(Bruch b);    // Division

	// die nachfolgend erwähnten Funktionen dürfen auf private Elemente zugreifen
	friend Bruch operator-(Bruch a);             // Negation
	friend Bruch operator-(Bruch a, Bruch b);    // Subtraktion
	friend Bruch operator+(Bruch a, Bruch b);    // Addition
	friend std::ostream& operator<<( std::ostream& os, const Bruch& a );
};
#endif /* BRUCH_HPP */