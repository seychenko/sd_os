#include <stdio.h>
#include <windows.h>

enum buffs
{
    BF_TAUNT=0,
    BF_WINDFURY=1,
    BF_LIFESTEAL=2
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

int main()
{
    printf("Hello brave new world!");
    printf("something");
    struct card c;
    c.atack=2;
    c.health=3;
    c.cost=3;
    c.ef.buff=BF_LIFESTEAL;
    return 0;
}