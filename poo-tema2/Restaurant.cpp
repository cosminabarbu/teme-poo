

#include "Restaurant.h"
#include "Masa.h"
#include <iostream>

int Restaurant::getNrMese() const {
    return nrMese;
}
void Restaurant::setNrMese(int nrMese) {
    Restaurant::nrMese = nrMese;
}
int Restaurant::getOraDeschidere() const {
    return oraDeschidere;
}
void Restaurant::setOraDeschidere(int oraDeschidere) {
    Restaurant::oraDeschidere = oraDeschidere;
}
int Restaurant::getOraInchidere() const {
    return oraInchidere;
}
void Restaurant::setOraInchidere(int oraInchidere) {
    Restaurant::oraInchidere = oraInchidere;
}
Masa Restaurant::getDetaliiMasa(int indice) const {
    return detaliiMasa[indice];
}
void Restaurant::setDetaliiMasa(int indice) {
    Restaurant::detaliiMasa[indice]=detaliiMasa[indice];
}
void Restaurant::citire(){
    std::cout<<"Introduceti detaliile restaurantului:"<<std::endl;
    std::cin>>nrMese>>oraDeschidere>>oraInchidere;
}
void Restaurant::afisare(){
    std::cout<<"Restaurantul nostru dispune de "<< nrMese << " mese."<<std::endl;
    std::cout<<"Programul nostru este de Luni pana Vineri intre orele " << oraDeschidere <<":00 si "<< oraInchidere <<":00. Va asteptam!"<<std::endl;
}
Restaurant::Restaurant(int nrMese, int oraDeschidere, int oraInchidere/*, Masa *detaliiMese*/) : nrMese(nrMese), oraDeschidere(oraDeschidere), oraInchidere(oraInchidere)/*, detaliiMasa(detaliiMasa)*/ {};