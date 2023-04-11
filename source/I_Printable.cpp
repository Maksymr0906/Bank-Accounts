#include "I_Printable.hpp"

std::ostream &operator<<(std::ostream &os, const I_Printable &obj) {
    obj.print(os);
    
    return os;
}