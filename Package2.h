#ifndef PACKAGE2_H
#define PACKAGE2_H

#include "Vacation.h"

class Package2 : public Vacation
{
public:
    void bookHotels() override;
    void bookTours() override;
};

#endif