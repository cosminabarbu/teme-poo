

#ifndef POO_TEMA2_IOSTREAM_H
#define POO_TEMA2_IOSTREAM_H

#include <iostream>
class IOStream {
protected:
    virtual void afisare(std::ostream &os ) const = 0;
    virtual void citire() const = 0;
    friend std::ostream &operator<<(std::ostream &os, const IOStream &ob);
    virtual ~IOStream() = default;
};
std::ostream &operator<<(std::ostream &os, const IOStream &ob);
#endif //POO_TEMA2_IOSTREAM_H
