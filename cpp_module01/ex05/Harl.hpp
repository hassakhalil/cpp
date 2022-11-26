#ifndef HARL_H
#define HARL_H
#include <iostream>

class Harl {
    static void debug(void);
    static void info(void);
    static void warning(void);
    static void error(void);
    std::string array1[4];
    typedef void(*t_ptr)();
    t_ptr array2[4];
    public:
    Harl();
    ~Harl();
    void complain(std::string level);
};

#endif