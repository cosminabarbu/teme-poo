
#include "Client.h"
#include "Persoana.h"
#include <iostream>
Client::Client(){};
Client::Client(std::string nume, int varsta, int nrLocuriDorite) : Persoana(nume, varsta){
    this->nrLocuriDorite=nrLocuriDorite;
}
Client::Client(const Client& rhs) : Persoana(rhs.nume, rhs.varsta), nrLocuriDorite(rhs.nrLocuriDorite){};
Client &Client::operator=(const Client &rhs) {
    if (this!=&rhs){
        Client::operator=(rhs);
        nrLocuriDorite=rhs.nrLocuriDorite;
    }
    return *this;
}
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
 void Client::cit() {
std::cout<<"Introduceti numele, varsta si numarul de locuri dorite de client:\n";
std::cin>>nume>>varsta>>nrLocuriDorite;
}
 void Client::afis ()
{
    std::cout<<nume<<", in varsta de "<<varsta<<" ani doreste o masa cu "<<nrLocuriDorite<<" locuri."<<std::endl;
}

Client::~Client() {}

const char *Exceptie::what() const noexcept{
    return "Client fara rezervare.";
}
void Exceptie::afisare(std::ostream &os) const {
    os<<"Exceptie: Client fara rezervare.";
}

Exceptie::Exceptie() {}

Exceptie::~Exceptie() {}
