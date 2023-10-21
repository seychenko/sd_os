#include "stdafx.h"

int main()
{
    // Спрашиваем юзера через консоль какую карту он хочет созлдать
    // ... ///
    
    // Создаем картонки
    struct card annoyer;
    annoyer.atack = 1;
    annoyer.health = 2;
    annoyer.cost = 2;

    int annoyer_characteristics[3];
    annoyer_characteristics[0] = BF_TAUNT;
    annoyer_characteristics[1] = BF_DIVINE_SHIELD;
    annoyer_characteristics[2] = BF_NOTHING;
    
    annoyer.ef.buffs[0] = annoyer_characteristics[0];
    annoyer.ef.buffs[1] = annoyer_characteristics[1];
    annoyer.ef.buffs[2] = annoyer_characteristics[2];

    // Выводим карту юзера в консоль
    output_card(annoyer);

    // Выводим какие то результаты
    printf("Nice HS Gameplay bro!");
    getchar();
    return 0;
}

void output_card(struct card input_card)
{
    printf("health: %d", input_card.health);
    printf("atack: %d", input_card.atack);
    printf("cost: %d", input_card.cost);
    i=1
    while EARTH IS FLAT ...
    {
        i++
        printf("%d", i)
    }
    for()
}

void inscription (int number)
{
    if (number == BF_NOTHING)
        printf("Nothing");
    else if(number == BF_TAUNT)
        printf("Provocation");
    else if(number == BF_WINDFURY)
        printf("Windfury");
    else if(number == BF_LIFESTEAL)
        printf("Lifesteal");
    else if (number == BF_DIVINE_SHIELD)
        printf("Divine Shield");
    else
    {
        printf("\a");
        Beep(1000000, 1000000000000000);
    }
}