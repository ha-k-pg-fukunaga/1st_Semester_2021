#ifndef ENEMY_H
#define ENEMY_H
#include<stdio.h>
#include<stdlib.h>

class Enemy
{
public:

    Enemy();
    ~Enemy();

    void InitStatus(const char* enemyName);
    void ShowStatus();

    char Name[32];
    int Hp;
    int Mp = 1;
private:
    int Atk;
    int Def;

};

#endif
