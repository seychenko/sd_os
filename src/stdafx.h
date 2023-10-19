#include <stdio.h>
#include <windows.h>

enum buffs
{
    BF_TAUNT =0 ,
    BF_WINDFURY = 1,
    BF_LIFESTEAL = 2
};

struct effects
{
    int buff;
};

struct card
{
    unsigned int cost;
    unsigned int health;
    unsigned int atack;
    struct effects ef;
};