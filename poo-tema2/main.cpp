#include <iostream>
#include "Masa.h"
#include "Restaurant.h"
#include "Angajat.h"
#include "Client.h"
#include "Persoana.h"
#include "IOStream.h"
#include "BazaDeDateRestaurant.h"
#include <vector>
#include <string>
#include <map>
#include <memory>
int main() {
Restaurant r;
r.citire();
std::vector<Angajat>angajati={ {"Vasile", 30, "chelner", 23451},
                               {"Eftemie", 48, "bucatar", 67313},
                               {"Maria", 23, "chelner", 73928},
                               {"Catrinel", 37, "ajutor bucatar", 53891}
                               };
std::vector<Client>clienti={ {"Moraru Adelin", 30, 6},
                             {"Ana Cernicov", 42, 10},
                             {"Sonia Ror", 23, 4}
                           };

int key=0;
do{
    std::cout<<"Apasati tasta 0 pentru a iesi din program."<<std::endl;
    std::cout<<"Apasati tasta 1 pentru a afisa detalii despre restaurant."<<std::endl;
    std::cout<<"Apasati tasta 2 pentru a afisa toti angajatii restaurantului."<<std::endl;
    std::cout<<"Apasati tasta 3 pentru a afisa toti clientii restaurantului (din ziua curenta)"<<std::endl;
    std::cout<<"Apasati tasta 4 pentru a cauta un client in baza rezervarii"<<std::endl;
    std::cout<<"Apasati tasta 5 pentru a cauta o masa cu numarul de locuri cerut de client"<<std::endl;
    std::cout<<"Apasati tasta 6 pentru a adauga angajatul a"<<std::endl;
    std::cin>>key;
    switch(key) {
        case 0: {
            key = 0;
            break;
        }
        case 1: {
            r.afisare();
            std::cout << std::endl;
            break;
        }
        case 2: {
            for (int i = 0; i < angajati.size(); ++i)
                angajati[i].afis();
            std::cout << std::endl;
            break;
        }
        case 3: {
            for (int i = 0; i < clienti.size(); ++i)
                clienti[i].afis();
            std::cout << std::endl;
            break;
        }
        case 4: {
            BazaDeDateRestaurant::FindClientByNrLocuriDorite(4);
            /* try{
                 BazaDeDateRestaurant::FindClientByNrLocuriDorite(4);
             }catch(const Exceptie &exc){
                 std::cout<<exc<<std::endl;
             }*/

            break;
        }
        case 5: {
            BazaDeDateRestaurant::FindMasaByNrLocuriRezervare(4);
            break;
        }
        case 6: {
            Angajat a("Irina", 20, "chelner", 57813);
            angajati.push_back(a);
            for (int i = 0; i < angajati.size(); ++i)
                angajati[i].afis();
            std::cout << std::endl;
            break;
        }
        default: {
            std::cout << "Nu ati introdus un numar intre 1 si 6";
        }
    }
}while(key!=0);
    return 0;
}
