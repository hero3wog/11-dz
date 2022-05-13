#include "Header.h"


animal::animal() {
	kolvo_zubov = 0;
	height = 0;
	weight = 0;
	years = 0;
}

animal::animal(bool kolvo_zubov, int weight, int height, int years) {
	this->kolvo_zubov = kolvo_zubov;
	this->height = height;
	this->weight = weight;
	this->years = years;
}

Sobaka::Sobaka() {
	poroda = "not stated";
}

Sobaka::Sobaka(bool kolvo_zubov, int weight, int height, int years, string poroda) : animal(kolvo_zubov, weight, height, years) {
	this->poroda = poroda;
}

void Sobaka::sleep() {
	cout << "Sobaka is sleeping" << endl;
}



Koshka::Koshka() {
	poroda = "not stated";
}

Koshka::Koshka(bool kolvo_zubov, int weight, int height, int years, string poroda) : animal(kolvo_zubov, weight, height, years) {
	this->poroda = poroda;
}

void Koshka::sleep() {
	cout << "Koshka is sleeping" << endl;
}


popugay::popugay() {
	poroda = "not stated";
}

popugay::popugay(bool kolvo_zubov, int weight, int height, int years, string poroda) : animal(kolvo_zubov, weight, height, years) {
	this->poroda = poroda;
	
}

void popugay::sleep() {
	cout << "Popugay is sleeping" << endl;
}