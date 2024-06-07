//Calculator project
//Name : Valovyi Maksym

#include <iostream>
#include <typeinfo>
#include "Calculator.cpp"

using namespace std;

void calcRunning()
{
    int* firstInt = new int;
    int* secondInt = new int;
    int* resultInt = new int;
    
    double* firstDouble = new double;
    double* secondDouble = new double;
    double* resultDouble = new double;

    Calculator<int, int, int>* calcInt;
    Calculator<double, double, double>* calcDouble;
    cout << "Choose type of calculator: " << endl;
    cout << "1. Int" << endl;
    cout << "2. Double" << endl;
    int choice;
    cin >> choice;
    switch (choice)
    {
        case 1:
        {
            cout << "Case 1" << endl;

            delete firstDouble;
            delete secondDouble;
            delete resultDouble;
            delete calcDouble;

            firstDouble = nullptr;
            secondDouble = nullptr;
            resultDouble = nullptr;
            calcDouble = nullptr;

            //memory leak check
            if(firstDouble != nullptr || secondDouble != nullptr || resultDouble != nullptr || calcDouble != nullptr)
            {
                cout << "Memory leak" << endl;
            }

            calcInt->runningProcess();

            break;
        }
        case 2:
        {
            cout << "Case 2" << endl;

            delete firstInt;
            delete secondInt;
            delete resultInt;
            delete calcInt;

            firstInt = nullptr;
            secondInt = nullptr;
            resultInt = nullptr;
            calcInt = nullptr;
            
            //memory leak check
            if(calcInt != nullptr || firstInt != nullptr || secondInt != nullptr || resultInt != nullptr)
            {
                cout << "Memory leak" << endl;
            }
            
            calcDouble->runningProcess();
            break;
        }
    }
    
}

int main(int argc, char const *argv[])
{
    calcRunning();

    return 0;
}
