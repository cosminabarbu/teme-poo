

#ifndef POO_TEMA2_RESTAURANT_H
#define POO_TEMA2_RESTAURANT_H
#include "Masa.h"
#include <vector>

class Restaurant {
private:
    int nrMese;
    int oraDeschidere;
    int oraInchidere;
    std::vector<Masa> detaliiMasa;
public:
    Restaurant() = default;
    Restaurant(int nrMese, int oraDeschidere, int oraInchidere/*, Masa detaliiMasa[]*/);
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


};


#endif //POO_TEMA2_RESTAURANT_H
