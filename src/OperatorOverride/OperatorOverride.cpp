#include <iostream>
#include "OperatorOverride.h"


class VOperator
{
public:

    int a, b;

    VOperator(int a, int b) : a(a), b(b){}

    VOperator Add(const VOperator& other) const
    {
        return VOperator(a + other.a, b + other.b);
    }

    VOperator operator+(const VOperator& other) const
    {
        return Add(other);
    }
};

std::ostream& operator<<(std::ostream& os, const VOperator& vOperator)
{
    os << "a = " << vOperator.a << ", b = " << vOperator.b;
    return os;
}

void OperatorOverrideTest()
{
    std::cout << "OperatorOverrideTest" << std::endl;

    VOperator vOperator1(1, 2);
    VOperator vOperator2(3, 4);
    VOperator vOperator3 = vOperator1 + vOperator2;
    std::cout << "vOperator3 = " << vOperator3 << std::endl;
}