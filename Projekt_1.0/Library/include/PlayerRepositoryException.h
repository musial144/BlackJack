//
// Created by student on 26.06.2020.
//

#ifndef BLACKJACK_PLAYERREPOSITORYEXCEPTION_H
#define BLACKJACK_PLAYERREPOSITORYEXCEPTION_H
#include <stdexcept>

class PlayerRepositoryException : public std::logic_error
{
public:
    explicit PlayerRepositoryException(const std::string&);
    static const std::string exceptionPlayerNotExist;
    static const std::string exceptionPlayerNullPtr;
};
#endif //BLACKJACK_PLAYERREPOSITORYEXCEPTION_H
