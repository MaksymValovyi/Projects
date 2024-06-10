#include "Calculator.h"
#include "FunktionsBasic.h"


template<class T1, class T2, class R>
Calculator<T1, T2, R>::Calculator()
{
    cout << "Constructor called" << endl;
    //cout << "Type of variables is : " << typeid(T1).name() << endl;
    // running process
    runningProcess();

}

template<class T, class U, class V> Calculator<T, U, V>::~Calculator(){
    cout << "Destructor called" << endl;

}


template<typename T1, typename  T2, typename T3> void Calculator<T1, T2, T3>::runningProcess()
{
    T1 first;
    T2 second;
    T3 result;
    char operation;

    cout << "Enter Number: ";
    cin >> first;

    while(1==1){
        
        /* TO DO : 
        do{
            cout << "Enter first number: ";
            cin >> first;
        }while(typeid(first).name() != typeid(T1).name());
        */

        do{
            cout << "Enter operation: ";
            cin >> operation;
        }while(operation != '+' && operation != '-' && operation != '*' && operation != '/');
        
        cout << "Enter Number: ";
        cin >> second;

        operationCalc(first, second, operation, result);        //chouce an operation

        cout << "Result: " << result << endl;

        first = result;

        decisionMakingProc(first, second, operation, result);   //decisions in calc(exit, clear, continue)
    }
}
