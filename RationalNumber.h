//
// Created by Mark on 9/19/2015.
//

#ifndef CS263HW1_RATIONALNUMBER_H
#define CS263HW1_RATIONALNUMBER_H

#include<string>

using namespace std;

class RationalNumber {
private:
    int numerator;
    int denominator;

    void reduce();
    int gcd(int, int);

public:
    RationalNumber(int, int);
    RationalNumber(const RationalNumber&);
    int getNumerator() const;
    int getDenominator() const;
    RationalNumber reciprocal() const;
    RationalNumber add(const RationalNumber&) const;
    RationalNumber subtract(const RationalNumber&) const;
    RationalNumber multiply(const RationalNumber&) const;
    RationalNumber divide(const RationalNumber&) const;
    bool isLike(const RationalNumber&) const;
    string toString() const;
};

#endif //CS263HW1_RATIONALNUMBER_H
