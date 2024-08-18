#include "Visibility.h"
#include <stdio.h>

class VisibilityBase
{
public:
    int x;

protected:
    int y;

private:
    int z;
};

class VisibilityDerived : public VisibilityBase
{
public:
    void print()
    {
        printf("x = %d \n", x);
        printf("y = %d \n", y);
        // printf("z = %d \n", z); // Error, z is private
    }
};

void VisibilityTest() {
    printf("VisibilityTest \n");
    VisibilityDerived derived;
    derived.print();
}