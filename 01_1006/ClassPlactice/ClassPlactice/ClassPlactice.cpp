#include <stdlib.h>
#include <stdio.h>

//クラスを作成します
class Fighter
{
public:

    int m_hp;
    int m_str;
    int m_mag;
    int m_tec;
    int m_spd;
    int m_def;
    int m_iuc;
    int m_mde;

    //コンストラクタ
    Fighter();

    //デストラクタ
    ~Fighter();
};

Fighter::Fighter()
{
    m_hp = 0;
     m_str = 0;
     m_mag = 0;
     m_tec = 0;
     m_spd = 0;
     m_def = 0;
     m_iuc = 0;
     m_mde = 0;

}

Fighter::~Fighter()
{

}

int main()
{
    Fighter God;

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

