//
// Created by student on 14.06.2020.
//

#ifndef BLACKJACK_REPOSITORY_H
#define BLACKJACK_REPOSITORY_H

#include <vector>
#include <memory>
template <class T>



class Repository {
private:
    std::vector<std::shared_ptr<T>> container;
public:
    virtual bool add(std::shared_ptr<T> object) = 0;
    virtual bool sub(std::shared_ptr<T> object) = 0;
    virtual std::string getInfo() = 0;
    //virtual std::shared_ptr<T> get(int index)=0;
};

#endif //BLACKJACK_REPOSITORY_H
