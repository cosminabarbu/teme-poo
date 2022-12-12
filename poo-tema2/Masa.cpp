

#include "Masa.h"
#include <iostream>

bool Masa::getOcupata() const {
    return isOcupata;
}
void Masa::setOcupata(bool isOcupata) {
    Masa::isOcupata = isOcupata;
}
int Masa::getNrLocuri() const {
    return nrLocuri;
}
void Masa::setNrLocuri(int nrLocuri) {
    Masa::nrLocuri = nrLocuri;
}
void Masa::citire() {
    std::cout<<"Introduceti detaliile mesei:"<<std::endl;
    std::cin>>isOcupata>>nrLocuri;
}
void Masa::afisare() {
    if(isOcupata==true) std::cout<<"Masa de " << nrLocuri <<" locuri este ocupata."<<std::endl;
    else std::cout<<"Masa de "<< nrLocuri <<" locuri este libera."<<std::endl;
}
Masa :: Masa (bool isOcupata,  int nrLocuri) : isOcupata(isOcupata), nrLocuri(nrLocuri){};