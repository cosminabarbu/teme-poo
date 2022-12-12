

#include "IOStream.h"

std::ostream& operator<<(std::ostream& os, const IOStream& ob){
    ob.afisare(os);
    return os;
}
//IOStream::~IOStream() = default;