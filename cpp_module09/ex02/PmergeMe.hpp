#ifndef PMERGEME_H
# define PMERGEME_H
#include    <iostream>
#include   <vector>
#include  <deque>

class PmergeMe{
    public:
    PmergeMe();
    PmergeMe(const PmergeMe& other);
    PmergeMe& operator = (const PmergeMe& other);
    ~PmergeMe();
    void sort(std::vector<int> &v);
    void sort(std::deque<int> &l);
    void insertionSort(std::vector<int> &v);
    void insertionSort(std::deque<int> &l);
    void mergeSort(std::vector<int> &v);
    void mergeSort(std::deque<int> &l);
    private:
    std::vector<int> v;
    std::deque<int> d;
    //container1 
    //container2
};

#endif
