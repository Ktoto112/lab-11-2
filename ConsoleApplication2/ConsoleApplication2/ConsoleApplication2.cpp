#include <iostream>
using namespace std;

int main() {
    double* ptrAs, * ptrBc;

    
    ptrAs = new double;
    ptrBc = new double;

  
    cout << "Enter a value for ptrAs: ";
    cin >> *ptrAs;
    cout << "Enter a value for ptrB: ";
    cin >> *ptrBc;

    
    double temp = *ptrAs;
    *ptrAs = *ptrBc;
    *ptrBc = temp;

    
    cout << "After changing places:\n";
    cout << "ptrA = " << *ptrAs << ", ptrB = " << *ptrBc << endl;

   
    delete ptrAs;
    delete ptrBc;

    return 0;
}

