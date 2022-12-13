

#ifndef POO_TEMA2_BAZADEDATERESTAURANT_H
#define POO_TEMA2_BAZADEDATERESTAURANT_H
#include <iostream>
#include "Persoana.h"
#include "Angajat.h"
#include "Client.h"
#include "Masa.h"
#include <vector>
#include <memory>

class BazaDeDateRestaurant {

    static std::vector<std::shared_ptr<Persoana>> Persoane;
    static std::vector<std::shared_ptr<Client>> Clienti;
    static std::vector<std::shared_ptr<Masa>> Mese;
public:
    BazaDeDateRestaurant()=delete;
    static void AddPersoana(std::shared_ptr<Persoana>pers);
    static std::shared_ptr<Persoana> FindPersByName(const std::string &nume);
    static std::shared_ptr<Client> FindClientByNrLocuriDorite(int nrLocuriDorite);
    static std::shared_ptr<Masa> FindMasaByNrLocuriRezervare(int nrLocuri);
//    static std::vector<std::shared_ptr<Angajat>>GetAllAngajati();
};
std::vector<std::shared_ptr<Persoana>> BazaDeDateRestaurant::Persoane;
std::vector<std::shared_ptr<Client>> BazaDeDateRestaurant::Clienti;



#endif //POO_TEMA2_BAZADEDATERESTAURANT_H
