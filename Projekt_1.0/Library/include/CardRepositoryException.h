//
// Created by student on 26.06.2020.
//

#ifndef BLACKJACK_CARDREPOSITORYEXCEPTION_H
#define BLACKJACK_CARDREPOSITORYEXCEPTION_H
#include <stdexcept>

class CardRepositoryException : public std::logic_error
{
public:
    explicit CardRepositoryException(const std::string&);
    static const std::string exceptionCardNotExist;
    static const std::string exceptionCardNullPtr;
    static const std::string exceptionDeckIsEmpty;
};
#endif //BLACKJACK_CARDREPOSITORYEXCEPTION_H
