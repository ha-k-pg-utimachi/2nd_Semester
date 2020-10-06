#ifndef UNIT_H
#define UNIT_H

//クラスを作成します
class Unit
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
    Unit();

    //デストラクタ
    ~Unit();
};
#endif