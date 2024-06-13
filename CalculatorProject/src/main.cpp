//Calculator project
//Name : Valovyi Maksym

#include <iostream>
#include <typeinfo>
#include "Calculator.cpp"

using namespace std;

void calcRunning()
{
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

            Calculator<int, int, int>* calcInt;
            calcInt->runningProcess();

            break;
        }
        case 2:
        {
            cout << "Case 2" << endl;

            Calculator<double, double, double>* calcDouble;
            calcDouble->runningProcess();
            break;
        }
        default:
        {
            cout << "Wrong choice" << endl;
            break;
        }
            
    }
    
}

int main(int argc, char const *argv[])
{
    calcRunning();

    return 0;
}
