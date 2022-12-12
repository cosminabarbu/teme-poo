
#include "Client.h"
#include <iostream>

int Client::getNrLocuriDorite()  const {
    return nrLocuriDorite;
}
void Client::setNrLocuriDorite(int nrLocuriDorite) {
    Client::nrLocuriDorite=nrLocuriDorite;
}
Persoana::TipPersoana Client::getTipPersoana() const {
    return TipPersoana::Client;
}
void Client::Prezentare() const {
    std::cout<<"Buna ziua, am o rezervare pe numele "<< /*getname*/ nume<< "."<<std::endl;
}
void Client::afisare(std::ostream &os) const {
    os<<"Clientul: "<< nume << "cu rezervare pentru "<< nrLocuriDorite<< " locuri."<<std::endl;
}
Client:: Client(std::string nume, int varsta,  int nrLocuriDorite) : Persoana(std::move(nume), varsta), nrLocuriDorite( nrLocuriDorite){};