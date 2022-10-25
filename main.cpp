#include <iostream>
using namespace std;
class Masa{
private:
    bool ocupata;
    int nr_locuri;
public:
    Masa(){
        ocupata= false;
        nr_locuri=0;
    }
    Masa(bool ocupata, int nr_locuri){
        this->ocupata = ocupata;
        this->nr_locuri = nr_locuri;
    }
    bool get_ocupata()const{
        return ocupata;
    }
    void set_ocupata(bool ocupata){
        this->ocupata = ocupata;
    }
    int get_nr_locuri()const{
        return nr_locuri;
    }
    void set_nr_locuri(int nr_locuri){
        this->nr_locuri = nr_locuri;
    }

    friend ostream &operator<<(ostream  &out, const Masa &m){
        if(m.ocupata == true)
            out<< "Masa de "<< m.nr_locuri<<" persoane este ocupata" << endl;
        else  out<< "Masa de "<< m.nr_locuri<<" persoane este libera" << endl;

        return out;
    }
    ~Masa(){
        ocupata = false;
        nr_locuri = 0;
    }

};
class Restaurant{
private:
    int nr_mese;
    Masa mese[20]; ///presupunem ca un resturant poate avea max 20 mese
public:
    Restaurant(){
        cout<< "Introduceti numarul de mese: ";
        cin>>nr_mese;
        int x;
        for(int i=0; i<nr_mese; i++){
            cout<<"  introduceti numarul de locuri pentru masa " << i+1 << endl;
            cin>>x; cout<<endl;
            mese[i].set_nr_locuri(x);
            mese[i].set_ocupata(false);

        }
    }
    Restaurant(int nr_mese, Masa mese[]){
        this->nr_mese = nr_mese;
        for(int i=0; i<nr_mese; i++)
            this->mese[i] = mese[i];
    }
    ~Restaurant(){
        nr_mese = 0;
    }
    void afiseaza_mese();
    void cauta_masa(int x);
    void ocupa_masa(Masa &m);
    ///void adauga_masa();
    ///void sterge_masa();
    ///void adauga_locuri_masa();
    ///void sterge_locuri_masa();


};

void Restaurant :: afiseaza_mese(){
    cout<< "Restaurantul nostru are urmatoarele mese:  "<<endl;
    for(int i=0; i<nr_mese; i++)
    {
        cout<<"Masa "<< i+1 << " de ";
        if(mese[i].get_ocupata() == true ) {
            cout << mese[i].get_nr_locuri() << " persoane este ocupata" << endl;
        }
        else cout << mese[i].get_nr_locuri() << " persoane este libera" << endl;
    }

}
void Restaurant::ocupa_masa(Masa &m) {
    m.set_ocupata(true);
}
void Restaurant :: cauta_masa(int x){
    for(int i=0; i<nr_mese; i++) {
        if (mese[i].get_ocupata() == false && mese[i].get_nr_locuri() >= x) {
            cout << mese[i];
            ocupa_masa(mese[i]);
            cout << "Ati ocupat masa cu nr " << i+1 << endl;
            break;
        }
    }
}

int main()
{ Restaurant r;
    r.afiseaza_mese();
    cout<< "Introduceti nr de persoane pentru care cautati masa " << endl;
    int x;
    cin>>x;

    r.cauta_masa(x);
    ///r.afiseaza_mese();


    return 0;
}