

#ifndef POO_TEMA2_RESTAURANT_H
#define POO_TEMA2_RESTAURANT_H
#include "Masa.h"
#include "Persoana.h"
#include "Angajat.h"
#include "Client.h"
#include <vector>
#include <memory>
#include <map>
#include <string>
#include <vector>
#include <iostream>

class Restaurant {
private:
    Restaurant(int nrMese, int oraDeschidere, int oraInchidere);

    int nrMese{};
    int oraDeschidere{};
    int oraInchidere{};
    std::vector<Masa> detaliiMasa;

    static std::vector<std::shared_ptr<Persoana>> Persoane;


public:
    Restaurant() = default;

    Restaurant(int nrMese, int oraDeschidere, int oraInchidere, Masa detaliiMasa[]);

    int getNrMese() const;

    void setNrMese(int nrMese);

    int getOraDeschidere() const;

    void setOraDeschidere(int oraDeschidere);

    int getOraInchidere() const;

    void setOraInchidere(int oraInchidere);

    Masa getDetaliiMasa(int indice) const;

    void setDetaliiMasa(int indice);

    void citire();

    void afisare();

    ~Restaurant() = default;


}
;


#endif //POO_TEMA2_RESTAURANT_H
