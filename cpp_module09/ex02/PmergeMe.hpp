#ifndef PMERGEME_H
# define PMERGEME_H
#include  <iostream>
#include  <vector>
#include  <list>

class PmergeMe{
    public:
    PmergeMe();
    PmergeMe(int ac, char **av);
    PmergeMe(const PmergeMe& other);
    PmergeMe& operator = (const PmergeMe& other);
    ~PmergeMe();
    void sort_vector();
    void sort_list();
    void insertionSort_vector();
    void insertionSort_list();
    void mergeSort_vector();
    void mergeSort_list();
    bool is_number(std::string const& s);
    private:
    //container1 
    std::vector<int> v;
    //container2
    std::list<int> l;
    int range_size;
};

#endif
