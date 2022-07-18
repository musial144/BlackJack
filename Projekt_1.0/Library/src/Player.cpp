//
// Created by student on 13.06.2020.
//
#include <iostream>
#include "../include/Player.h"

Player::Player(int id, int points, bool inGame ) : id(id), points(points), inGame(inGame) {}

int Player::getId()
{
    return id;
}

int Player::getPoints()
{
    return points;
}
char Player::choose(char key)
{
    if(key=='1') return '1';
    if(key=='2') return '2';
    else return '3';
}
bool Player::getInGame()
{
    return inGame;
}
void Player::setInGame()
{
    inGame=true;
}
void Player::setOffGame()
{
    inGame=false;
}
void Player::setPoints(int a)
{
    points=a;
}

Player::~Player() = default;
