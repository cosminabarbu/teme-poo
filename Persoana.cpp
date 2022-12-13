
#include "Persoana.h"
#include <iostream>
#include <string>

Persoana::Persoana(std::string nume, int varsta) : nume(std::move(nume)), varsta(varsta){}
Persoana::Persoana(const Persoana &rhs) : nume(rhs.nume), varsta(rhs.varsta){}

Persoana &Persoana::operator=(const Persoana &rhs) {
    if (this != &rhs) {
        nume = rhs.nume;
        nume = rhs.nume;
    }

    return *this;
}

const std::string &Persoana::getNume() const {
    return nume;
}
void Persoana ::setNume(std::string nume) {
    Persoana::nume =  std::move(nume );
}
int Persoana::getVarsta() const {
    return varsta;
}
void Persoana::setVarsta(int varsta) {
    Persoana::varsta = varsta;
}
void Persoana::afisare(std::ostream &os) const{
    std::cout<<nume<<varsta;
}
void Persoana::Prezentare() const {
    std::cout<<"Buna ziua, sunt "<< nume << "."<<std::endl;
}
void Persoana::cit(){
    std::cout<<"Introduceti numele si varsta persoanei:"<<std::endl;
    std::cin>>nume>>varsta;
}
void Persoana::afis(){
    std::cout<<nume<<", in varsta de "<<varsta<<" ani." <<std::endl;
}

Persoana::~Persoana()=default;