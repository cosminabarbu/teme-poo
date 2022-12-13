#include "Persoana.h"
#include "Client.h"
#include "BazaDeDateRestaurant.h"
#include <iostream>

void BazaDeDateRestaurant::AddPersoana(std::shared_ptr<Persoana> pers) {
    Persoane.push_back(pers);
}
std::shared_ptr<Persoana>BazaDeDateRestaurant::FindPersByName(const std::string &nume) {
    for(auto &pers: Persoane){
        if(pers->getNume()==nume)
            return pers;
    }
    throw Exceptie();
}
std::shared_ptr<Client>BazaDeDateRestaurant::FindClientByNrLocuriDorite(const int nrLocuriDorite){
    for(auto &client : Clienti){
        if(client->getNrLocuriDorite()==nrLocuriDorite)
            client->afis();
    }
    throw Exceptie();
}
std::shared_ptr<Masa>BazaDeDateRestaurant::FindMasaByNrLocuriRezervare(const int nrLocuri){
    for(auto &masa : Mese){
        if(masa->getNrLocuri()==nrLocuri)
            masa->afisare();
    }

}