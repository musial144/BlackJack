//
// Created by student on 26.06.2020.
//

#ifndef BLACKJACK_TABLEEXCEPTION_H
#define BLACKJACK_TABLEEXCEPTION_H
#include <stdexcept>

class TableException : public std::logic_error
{
public:
    explicit TableException(const std::string&);
    static const std::string exceptionPlayerNotExist;
    static const std::string exceptionFileError;
};
#endif //BLACKJACK_TABLEEXCEPTION_H
