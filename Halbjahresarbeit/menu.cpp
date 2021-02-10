#include "menu.h"
#include <string>
#include <iostream>
#include <sstream>
void menu::eingabe() {
		std::cout << "Geben sie eine zahl zwischen 1 und 4 ein.\n Mit der eingabe 1 könenn sie alle Einträge sehen\n mit der Eingabe 2 könne sie ein Neuen Eintag anlegen\n mit der Eingabe 3 könne sie Eine Eingabe suchen\n und mit der Eingabe 4 benden sie das Programm\n";
		std::stringstream ss;
		std::string Eingabe;
		std::cout << "Ihre Eingabe: ";
		std::cin >> Eingabe;
		ss << Eingabe;
		int number;
		ss >> number;
		if (number > 4) {
			system("color c");
			wrong();
			system("PAUSE");
		} system("color 2");
		if (number == 1) {
			all();
		}
		if (number == 2) {
			neu();
		}
		if (number == 3) {
			search();
		}
		if (number == 4) {
			close();

		}
	}
void menu::wrong() {
	std::cout << "Bitte geben sie eine zahl zwischen 1 und 4 ein!";
}
void menu::all() {
	std::cout << "Hier werden nun alle eingaben angezeigt.";
}
void menu::neu() {
	std::cout << "Bitte legen sie nun eintrag an.";
}
void menu::search() {
	std::cout << "Suchen sie nun einen eintrag";
} 
void menu::close() {
	std::cout << "Das Programm schliesst in kürze.";
}
