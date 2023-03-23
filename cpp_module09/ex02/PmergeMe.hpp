#ifndef PMERGEME_H
# define PMERGEME_H
#include  <iostream>
#include  <vector>
#include  <deque>

class PmergeMe{
    public:
    PmergeMe();
    PmergeMe(int ac, char **av);
    PmergeMe(const PmergeMe& other);
    PmergeMe& operator = (const PmergeMe& other);
    ~PmergeMe();
    void sort_vector(int low,int high,int k);
    void sort_deque(int low, int high, int k);
    void insertionSort_vector(int low, int high);
    void insertionSort_deque(int low,int high);
    void merge_vector(int low,int mid,int high);
    void merge_deque(int low,int mid,int high);
    bool is_number(std::string const& s);
    private:
    //container1 
    std::vector<int> v;
    //container2
    std::deque<int> d;
    int range_size;
};

#endif
