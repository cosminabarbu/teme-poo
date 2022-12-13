

#ifndef POO_TEMA2_MASA_H
#define POO_TEMA2_MASA_H


class Masa {
private:
    bool isOcupata;
    int nrLocuri;
public:
    Masa() = default;
    Masa(bool isOcupata, int nrLocuri);
    bool getOcupata() const;
    void setOcupata(bool isOcupata);
    int getNrLocuri() const;
    void setNrLocuri(int nrLocuri);
    void citire();
    void afisare();
    ~Masa() = default;

friend class Restaurant;
};
#endif //POO_TEMA2_MASA_H
