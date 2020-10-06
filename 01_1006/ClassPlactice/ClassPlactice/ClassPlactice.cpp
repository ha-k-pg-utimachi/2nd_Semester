#include <stdlib.h>
#include <stdio.h>
#include "Common.h"
#include "Unit.h"




int main()
{
    Unit God;

    printf(" hp = %d\n", God.m_hp);
    printf(" str = %d\n", God.m_str);
    printf(" mag = %d\n", God.m_mag);
    printf(" tec = %d\n", God.m_tec);
    printf(" spd = %d\n", God.m_spd);
    printf(" def = %d\n", God.m_def);
    printf(" iuc = %d\n", God.m_iuc);
    printf(" mde = %d\n", God.m_mde);

    system("pause");
    return 0;

}

