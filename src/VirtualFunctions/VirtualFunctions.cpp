#include "VirtualFunctions.h"
#include <stdio.h>

// 接口
class IPrintable
{
public:
    virtual void PrintName() = 0; // 纯虚函数
};

class EntityBase : public IPrintable
{
public:

    virtual void Print() {
        printf("EntityBase \n");
    }

    virtual void PrintName() override {
        printf("EntityBase PrintName \n");
    }
};

class Player : public EntityBase, public IPrintable
{
public:
    void Print() override {
        printf("Player \n");
    }
    
    void PrintName() override {
        printf("Player PrintName \n");
    }
};

void PrintFunc1(EntityBase* p)
{
    p->Print();
}

void PrintFunc2(IPrintable* p)
{
    p->PrintName();
}

void VirtualFunctionsTest() {
    printf("VirtualFunctionsTest \n");
    EntityBase* e = new EntityBase();
    Player* p = new Player();

    PrintFunc1(e);
    PrintFunc1(p);
    PrintFunc2(e);
    PrintFunc2(p);

    printf("size of EntityBase = %d \n", sizeof(*e)); // 8
    printf("size of Player = %d \n", sizeof(*p)); // 16 , because EntityBase has virtual function, so Player has virtual table

}