#include <stdlib.h>
#include <stdio.h>

// Figiterクラスを作成します
class Figter
{
public:

    int m_hp;
    int m_str;
    int m_mag;
    int m_tec;
    int m_spd;
    int m_def;
    int m_iuc;
    int m_mdef;

    //コンストラクタ
    Figter();

    //デストラクタ
    ~Figter();
};

Figter::Figter()
{

}

int main()
{
    
    system("pause");
    return 0;

}

