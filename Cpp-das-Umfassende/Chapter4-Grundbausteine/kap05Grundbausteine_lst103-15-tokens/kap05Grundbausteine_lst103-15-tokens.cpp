#          include <iostream>       // # muss am Zeilenanfang stehen
int             main(
) {
	std::cout
		<< "Dies ist "
		"Text mit <Klammern>\n"     // String-Literal unterbrochen durch neue Zeile
		;
	//= Dies ist Text mit <Klammern>

	/*Typ:*/ int
		/*Variable:*/ ein_Wert
		/*Init:*/ = 100;                // innere Kommentare

	std::cout << ein_Wert << "\n";
}         // keine Leerzeichen
//= 100

