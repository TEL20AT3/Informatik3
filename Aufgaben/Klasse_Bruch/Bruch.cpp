
#include "Bruch.hpp"

/* Konstruktor
* Es wird hier nur ein Konstruktor definiert, der zwei Parameter verlangt.
* In der Klassendefinition (Bruch.hpp) werden allerdings Default-Parameter angegeben,
* sodass die Parameter auch weggelassen werden können. Es ist also auch ein Aufruf
* des Konstruktors ohne Parameter möglich (=Standard-Konstruktor).
*/
Bruch::Bruch(int z, int n)
	:_z(z), _n(n) // Inline Initialisierung der Membervariablen (besser als Zuweisung)
{}


Bruch::operator double()         // Ermöglicht die Typkonvertierung Bruch -> double
{
    return (double)_z / _n;      // Wichtig: keine Integerdivision!
}


/* kuerzen
* Diese Methode sucht den größten gemeinsamen Teiler von _z und _n
* und kürzt anschließend den Bruch. Da sich die Werte der Membervariablen _z und _n
* dabei ändern, ist dies keine const Methode, obwohl der Wert des Bruchs
* beim Kürzen eigentlich erhalten bleibt.
*/
void Bruch::kuerzen()
{
	int t = ggT(_z, _n);
	_z /=t;
	_n /=t;

}


/* ggT sucht den größten gemeinsamen Teiler
* ggT ist private, darf also nur von Methoden der Klasse aufgerufen werden (z.B. kuerzen)
* ggT ist static, hat also keinen Bezug zu einem Exemplar (this ist nicht verfügbar)
*/
int Bruch::ggT(int a, int b) // private, static
{
	if( b==0)
        return a;
    else
        return ggT(b, a%b);
    // Kompakter: if(b) return ggT(b, a%b); return a;
}


/*
* Als Methoden der Klasse
*/
// Multiplikation (a*b)
Bruch Bruch::operator*( Bruch b)
{
	return Bruch( _n*b._n, _z*b._z );
}

// Division (a/b)
Bruch Bruch::operator/ (Bruch b)
{
	return Bruch( _z*b._n, _n*b._z );
}

/* Operator zur Negation (-a)
* Als Funktion (nicht als Methode der Klasse) definiert, jedoch friend der Klasse.
* Der eine Operand muss als Parameter a übergeben werden.
*/
Bruch operator-(Bruch a) {
/*  Ausführliche Schreibweise:
    Bruch k;        // Standard-Konstruktor erzeugt k=0/1
    k._z = -(a._z); // der Zähler von a wird negiert und zugewiesen
    k._n = a._n;    // der Nenner wird ebenfalls verändert
    return k;       // der lokale Ergebiswert wird zurückgegeben
*/
	return Bruch(-a._z, a._n); // Besser: Initialisierung mit Ergebniswerten
}

/* Operator zur Subtraktion (a-b)
* benutzt einfach die Negation und die Addition
*/
Bruch operator-(Bruch a, Bruch b) {
	return a +(-b);
}

// Addition (a+b)
Bruch operator+(Bruch a, Bruch b)
{
	return Bruch( (a._z*b._n)+(b._z*a._n), a._n*b._n );
}



/* Ausgabeoperator (cout << b)
* Der linke Operand ist vom Typ Ausgabedatei (ostream) z.B. cout
* Der rechte Operand ist der Bruch der ausgegeben werden soll.
* In diesem Fall werden die Operanden zur Abwechslung mal als Referenzen übergeben.
* Das erspart die Erzeugung einer temporären Kopie. Der Zusatz const bewirkt, dass
* der auszugebende Bruch hierbei nicht verändert wird.
* Die Augabedatei wird aber verändert, deshalb hier kein const.
* Achtung: Der Returnwert ist ebenfalls eine Referenz!
* Das ist eine Ausnahme und nur dann zulässig, wenn das Exemplar,
* das man zurückgibt danach auch noch existiert.
* Lokale Funktionsvariablen erfüllen diese Bedingung nicht!
*/
std::ostream& operator<<( std::ostream& os, const Bruch& a )
{
	os << a._z << '/' << a._n;
	return os;
}
