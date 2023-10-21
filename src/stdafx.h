#include <stdio.h>clear

#include <windows.h>

enum bufs_explained
{
    BFE_NOTHING = "Nothing",
    BFE_TAUNT = "Provocation",
    BFE_WINDFURY = "Windfury",
    BFE_LIFESTEAL = "Lifesteal",
    BFE_DIVINE_SHIELD = "Divine Shield"
};

enum buffs
{
    BF_NOTHING = 0,
    BF_TAUNT = 1,
    BF_WINDFURY = 2,
    BF_LIFESTEAL = 3,
    BF_DIVINE_SHIELD = 4
};

struct effects
{
    int buffs[3];
};

struct card
{
    unsigned int cost;
    unsigned int health;
    unsigned int atack;
    struct effects ef;
};

void output_card(struct card);
void inscription (int number);