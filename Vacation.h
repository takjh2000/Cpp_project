#ifndef VACATION_H
#define VACATION_H

#include <iostream>
using namespace std;

class Vacation
{
public:
    virtual ~Vacation() {}     
    virtual void bookHotels() {}
    virtual void bookFlights() {}
    virtual void bookTours() {}
};

#endif
