
#include"enemy.h"

Enemy::Enemy()
{
    printf("コンストラクタ\n");
    Name[0] = '\0';
    Hp = 8;
    Mp = 1;
    Atk = 2;
    Def = 1;
}

Enemy::~Enemy()
{
    printf("デストラクタ\n");
}

void Enemy::InitStatus(const char* enemyName)
{
    sprintf_s(Name, 32, "%s", enemyName),

        Hp = 8;
    Atk = 2;
    Def = 1;
}
void Enemy::ShowStatus()
{
    printf("--- Enemy Status ---\n");
    printf("%s\n", Name);
    printf("Hp = %d\n", Hp);
    printf("Mp = %d\n", Mp);
    printf("Atk = %d\n", Atk);
    printf("Def = %d\n", Def);
}