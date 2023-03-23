#include "PmergeMe.hpp"

PmergeMe::PmergeMe():range_size(0){}

bool PmergeMe::is_number(std::string const& s){
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
PmergeMe::PmergeMe(int ac, char **av):range_size(ac-1){
    //fill the 2 containers
    //check if all arguments are (numbers,positive)
    struct timeval start, end;
    for (size_t i=1;i<(size_t)ac;i++){
        //check if av[i] is a number
        if (is_number(av[i]) == false)
            throw std::exception();
        int num = atoi(av[i]);
        if (num < 0)
            throw std::exception();
        v.push_back(num);
        d.push_back(num);
    }
    //print before msg
    std::cout << "Before: ";
    for (size_t i=0;i < v.size();i++){
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
    //sort
    gettimeofday(&start, NULL);
    sort_vector(0,v.size()-1,range_size/2);
    gettimeofday(&end, NULL);
    long double time1 = ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec));
    gettimeofday(&start, NULL);
    sort_deque(0,d.size()-1,range_size/2);
    gettimeofday(&end, NULL);
    long double time2 = ((end.tv_sec * 1000000 + end.tv_usec) - (start.tv_sec * 1000000 + start.tv_usec));

    //print after msg
    std::cout << "After: ";
    for (size_t i=0;i < v.size();i++){
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
    std::cout<<"Time to process a range of "<<range_size<<" elements with std::vector : "<<time1<<" us"<<std::endl;
    std::cout<<"Time to process a range of "<<range_size<<" elements with std::deque : "<<time2<<" us"<<std::endl;
}

PmergeMe::PmergeMe(const PmergeMe& other){
    *this = other;
}

PmergeMe& PmergeMe::operator = (const PmergeMe& other){
    if (this != &other){
        v = other.v;
        d = other.d;
        range_size  = other.range_size;
    }
    return *this;
}

PmergeMe::~PmergeMe(){}


void PmergeMe::sort_vector(int low,int high,int k){
    //divide the vector into  K sub-vectors
    if (low <high){
    //apply insertion sort to each sub-vector
        if (high-low+1 <= k)
            insertionSort_vector(low,high);
        else
        {
            //merge the sub-vectors
            int mid = low + (high-low)/2;
            PmergeMe::sort_vector(low,mid,k);
            PmergeMe::sort_vector(mid+1,high,k);
            PmergeMe::merge_vector(low,mid,high);
        }
    }
}

void PmergeMe::sort_deque(int low, int high,int k){
    //divide the vector into  K sub-vectors
    if (low <high){
    //apply insertion sort to each sub-vector
        if (high-low+1 <= k)
            insertionSort_deque(low,high);
        else
        {
            //merge the sub-vectors
            int mid = low + (high-low)/2;
            PmergeMe::sort_deque(low,mid,k);
            PmergeMe::sort_deque(mid+1,high,k);
            PmergeMe::merge_deque(low,mid,high);
        }
    }
}

void PmergeMe::insertionSort_vector(int low,int high){
    for (int i=low+1;i<=high;i++){
        int key = v[i];
        int j = i-1;
        while (j >= low && v[j] > key){
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = key;
    }
}

void PmergeMe::insertionSort_deque(int low,int high){
    for (int i=low+1;i<=high;i++){
        int key = d[i];
        int j = i-1;
        while (j >= low && d[j] > key){
            d[j+1] = d[j];
            j--;
        }
        d[j+1] = key;
    }
}

void PmergeMe::merge_vector(int low,int mid,int high){
    int n1 = mid - low + 1;
    int n2 = high - mid;

    std::vector<int> left(n1);
    std::vector<int> right(n2);

    for(int i=0;i<n1;i++)
        left[i] = v[low+i];
    for(int j=0;j<n2;j++)
        right[j] = v[mid+1+j];
    int i = 0;
    int j = 0;
    int k = low;
    while(i < n1 && j < n2){
        if (left[i] <= right[j]){
            v[k]=left[i];
            i++;
        }
        else{
            v[k] = right[j];
            j++;
        }
        k++;
    }
    while(i <n1){
        v[k] = left[i];
        i++;
        k++;
    }
    while (j<n2){
        v[k] = right[j];
        k++;
        j++;
    }
 }

void PmergeMe::merge_deque(int low,int mid,int high){
    int n1 = mid - low + 1;
    int n2 = high - mid;

    std::deque<int> left(n1);
    std::deque<int> right(n2);

    for(int i=0;i<n1;i++)
        left[i] = d[low+i];
    for(int j=0;j<n2;j++)
        right[j] = d[mid+1+j];
    int i = 0;
    int j = 0;
    int k = low;
    while(i < n1 && j < n2){
        if (left[i] <= right[j]){
            d[k]=left[i];
            i++;
        }
        else{
            d[k] = right[j];
            j++;
        }
        k++;
    }
    while(i <n1){
        d[k] = left[i];
        i++;
        k++;
    }
    while (j<n2){
        d[k] = right[j];
        k++;
        j++;
    }
 }