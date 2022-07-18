//
// Created by student on 26.06.2020.
//

#include "CardRepositoryException.h"
using namespace std;
CardRepositoryException::CardRepositoryException(const string &arg) : logic_error(arg)
{}

const string CardRepositoryException::exceptionCardNotExist = "THIS CARD DOESN'T EXIST IN REPOSITORY";
const string CardRepositoryException::exceptionCardNullPtr = "INVALID CARD (NULL)";
const string CardRepositoryException::exceptionDeckIsEmpty = "DECK DOESN'T CONTAIN ANY CARDS";