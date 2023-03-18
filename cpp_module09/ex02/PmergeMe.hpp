#ifndef PMERGEME_H
# define PMERGEME_H
#include    <iostream>

class PmergeMe{
    public:
    PmergeMe();
    PmergeMe(const PmergeMe& other);
    PmergeMe& operator = (const PmergeMe& other);
    ~PmergeMe();
    sort();
    private:
    //container1 
    //container2
};

#endif
