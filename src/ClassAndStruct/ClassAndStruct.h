#pragma once

void ClassAndStructTest();

class PlayerClass
{
    int x = 0, y = 0;
    int speed = 1;

public:
    void Move(int xa, int ya);
};

