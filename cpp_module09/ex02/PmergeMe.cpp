#include "PmergeMe.hpp"


void PmergeMe::sort(std::vector<int> &v){
    //divide the vector into  K sub-vectors
    //apply insertion sort to each sub-vector
    //merge the sub-vectors
}

void PmergeMe::sort(std::deque<int> &d){}

void PmergeMe::insertionSort(std::vector<int> &v){
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

void PmergeMe::insertionSort(std::deque<int> &d){
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

void PmergeMe::mergeSort(std::vector<int> &v){}

void PmergeMe::mergeSort(std::deque<int> &d){}