#include <iostream>
#include <Windows.h>
using namespace std;

template <typename T1, typename T2, typename R>
void operationCalc(T1 &first, T2 &second, char &operation, R &result)
{
    if(operation == '+'){
            result = first + second;
        }else if(operation == '-'){
            result = first - second;
        }else if(operation == '*'){
            result = first * second;
        }else if(operation == '/'){
            if(second == 0){
                cout << "Division by zero is not allowed" << endl;
                first = 0;
                second = 0;
                //continue;
            }
            result = first / second;
        }
};

template <typename T1, typename T2, typename R>
void decisionMakingProc(T1 &first, T2 &second, char &operation, R &result){
    cout << "What to do next?" << endl;
    cout << "Press C to clear variables" << endl;
    cout << "Press ESC to exit" << endl;
    cout << "Press Y to continue" << endl;

    bool decision = false;

    while(!decision){
        if (GetAsyncKeyState(0x43))
        {
            cout << "Variables cleared." << endl;
            first = 0;
            second = 0;
            result = 0;
            decision = true;
            
            cout << "Enter Number: ";
            cin >> first;

        }else if (GetAsyncKeyState(VK_ESCAPE))
        {
            cout << "Exiting" << endl;
            exit(0);
        }else if (GetAsyncKeyState(0x59))
        {
            decision = true;
        }
        Sleep(100);
    }
}