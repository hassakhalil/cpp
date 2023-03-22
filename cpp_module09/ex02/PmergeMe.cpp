#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){}

PmergeMe::PmergeMe(char **av){
    
}

PmergeMe::PmergeMe(const PmergeMe& other){
    *this = other;
}

PmergeMe& PmergeMe::operator = (const PmergeMe& other){
    if (this != &other){
        v = other.v;
        d = other.d;
    }
    return *this;
}

PmergeMe::~PmergeMe(){}


void PmergeMe::sort_vector(){
    //divide the vector into  K sub-vectors
    //apply insertion sort to each sub-vector
    //merge the sub-vectors
}

void PmergeMe::sort_list(){}

void PmergeMe::insertionSort_vector(){
    int key;
    int j;
    for (size_t i=1;i < v.size();i++){
        key = v[i];
        j = i - 1;
        while (j >= 0 && v[j] > key){
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = key;
    }
}

void PmergeMe::insertionSort_list(){
    int key;
    int j;
    for (size_t i=1;i < d.size();i++){
        key = d[i];
        j = i - 1;
        while (j >= 0 && d[j] > key){
            d[j+1] = d[j];
            j--;
        }
        d[j+1] = key;
    }
}

void PmergeMe::mergeSort_vector(){}

void PmergeMe::mergeSort_list(){}