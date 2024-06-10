#include <iostream>
#include <limits> 
#include <Windows.h>


using namespace std;

#ifndef __MYHEADER_H__
#define __MYHEADER_H__

template <typename T1, typename T2, typename R> class Calculator

{

public:

    //consstructor
    Calculator();

    ~Calculator();

    void runningProcess();

};

#endif // __MYHEADER_H__
