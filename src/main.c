#include "stdafx.h"

int main()
{
    // Спрашиваем юзера через консоль какую карту он хочет созлдать
    // ... ///
    
    // Создаем картонки
    struct card c;
    c.atack = 2;
    c.health = 3;
    c.cost = 3;
    c.ef.buff = BF_LIFESTEAL;

    // Выводим карту юзера в консоль
    // ... ///

    // Выводим какие то результаты
    printf("Nice HS Gameplay bro!");
    return 0;
}