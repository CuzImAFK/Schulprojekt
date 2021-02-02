#include <iostream>
#include <string>


int  main() {
	system("color 2");
	std::string Hello = "Einen Guten Tag wuensche ich ich freue mich das sie mein Programm Testen wollen.Sie fragen sich bestimmt wie dieses Programm funktoniert und was es kann es ist simple und doch genial und zwar ist dies eine Kati wo man information ueber sich eintragen und von andren abrufen. Ich hoffe ihr habt spass Mfg:Moritz";
	std::cout << Hello;
	//Begrüßung Text
std::cout << "Geben sie eine zahl zwischen 1 und 4 ein.\n Mit der eingabe 1 könenn sie alle Einträge sehen\n mit der Eingabe 2 könne sie ein Neuen Eintag anlegen\n mit der Eingabe 3 könne sie Eine Eingabe suchen\n und mit der Eingabe 4 benden sie das Programm\n";
	std::string Eingabe1;
	std::cout << "Ihre Eingabe: ";
	std::cin >> Eingabe1;
	if (Eingabe1 > "4") {
		system("color c");
		std::cout << "Bitte waehle eine zahl zwischen 1-4\n";
		system("PAUSE");
	} system("color 2");
	if (Eingabe1 == "1") {
		std::cout << "Hier koennen sie nun alle Eingaben sehen\n";
	}
	if (Eingabe1 == "2") {
		std::cout << "Hier koennen sie nun ein Neuen eintrag anlegen\n";
	}
	if (Eingabe1 == "3") {
		std::cout << "Nun koenne sie einen eintrag suchen\n";
	}
	if (Eingabe1 == "4") {
		std::cout << "Das Programm schliesst in Kuerze\n";
	}


}