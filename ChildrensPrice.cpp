#include "Movie.h"
#include "ChildrensPrice.h"

int ChildrensPrice::getPriceCode() const {
        return Movie::CHILDRENS;
}

double ChildrensPrice::getCharge(int daysRented) const {
        double result = 0;
        result += 1.5;
        if(daysRented > 3)
                result += (daysRented - 3) * 1.5;
        return result;
}
