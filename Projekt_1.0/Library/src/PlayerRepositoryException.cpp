//
// Created by student on 26.06.2020.
//

#include "PlayerRepositoryException.h"
using namespace std;
PlayerRepositoryException::PlayerRepositoryException(const string &arg) : logic_error(arg)
{}

const string PlayerRepositoryException::exceptionPlayerNotExist = "THIS PLAYER DOESN'T EXIST IN REPOSITORY";
const string PlayerRepositoryException::exceptionPlayerNullPtr = "INVALID PLAYER (NULL)";