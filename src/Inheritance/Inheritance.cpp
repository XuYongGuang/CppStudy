#include "Inheritance.h"
#include <stdio.h>

class Entity
{
public:
    float X, Y;
    void Print() {
        printf("Entity X: %f, Y: %f \n");
    }
};

class Player : public Entity
{
public:
    const char* Name;
    void PrintName() {
        printf("Player Name: %s \n");
    }
};


void InheritanceTest() {
    printf("InheritanceTest \n");
    Player player;
    player.Print();
    player.PrintName();

    printf("Size of Entity: %d \n", sizeof(Entity));
    printf("Size of Player: %d \n", sizeof(Player));
}