#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){
    range_size = 0;
}


bool is_number(std::string const& s){
    for (size_t i=0;i < s.size();i++){
        if (s[i] == '-' && i == 0){
            continue;
        }
        else if (isdigit(s[i]) == false){
            return false;
        }
    }
    return true;
}
PmergeMe::PmergeMe(int ac, char **av){
    //fill the 2 containers
    //check if all arguments are (numbers,positive)
    range_size = ac;
    for (size_t i=1;i <= ac;i++){
        //check if av[i] is a number
        if (is_number(av[i]) == false)
            throw std::exception();
        int num = atoi(av[i]);
        if (num < 0)
            throw std::exception();
        v.push_back(atoi(av[i]));
        l.push_back(atoi(av[i]));
    }
    //print before msg
    std::cout << "Before: ";
    for (size_t i=0;i < v.size();i++){
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
    //sort
    sort_vector();
    sort_list();
    //print after msg
    std::cout << "After: ";
    for (size_t i=0;i < v.size();i++){
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
    std::cout<<"Time to process a range of "<<range_size<<" elements with std::vector : "<<"<time1> us"<<std::endl;
    std::cout<<"Time to process a range of "<<range_size<<" elements with std::list : "<<"<time2> us"<<std::endl;
}

PmergeMe::PmergeMe(const PmergeMe& other){
    *this = other;
}

PmergeMe& PmergeMe::operator = (const PmergeMe& other){
    if (this != &other){
        v = other.v;
        l = other.l;
        range_size  = other.range_size;
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