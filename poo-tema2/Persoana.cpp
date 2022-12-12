
#include "Persoana.h"
#include <iostream>
#include <string>

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

Persoana::~Persoana()=default;