//
// Created by student on 26.06.2020.
//

#include "TableException.h"
using namespace std;
TableException::TableException(const string &arg) : logic_error(arg)
{}

const string TableException::exceptionPlayerNotExist = "THIS PLAYER DOESN'T EXIST IN REPOSITORY";
const string TableException::exceptionFileError = "CANNOT OPEN FILE";