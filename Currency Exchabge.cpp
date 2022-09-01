#include <iostream>
using namespace std;

int main()
{
    // Declaration of varibles
    int dollar,pound, mXpeso, jPyen, pakRupee,c;
    float U,B,M,J,P;

    // input American dollars
    cout << "\t\t\t ____________________________________________ " << endl;
    cout << "\t\t\t|                                            |" << endl;
    cout << "\t\t\t|    Welcome to currency into Exchange       |" << endl;
    cout << "\t\t\t|   Press 1 for Dollar:                      |" << endl;
    cout << "\t\t\t|   Press 2 for Pound :                      |" << endl;
    cout << "\t\t\t|   Press 3 for Mexican peso :               |" << endl;
    cout << "\t\t\t|   Press 4 for Japanese yen :               |" << endl;
    cout << "\t\t\t|   Press 5 for Pakistani rupees :           |" << endl;
    cout << "\t\t\t|____________________________________________|" << endl;
    cout << "\t\t\t\n Please select number for you should exchange into currency : " << endl;
    cin >> c;

    switch(c)
    {
    case 1:
        cout << "Please enter dollars for exchange in Indian rupees : " << endl;
        cin >>dollar;
        if(dollar > 0)
        {
            U=dollar*79.55;             // Calculation
            cout << dollar << " United State Dollar = " << U << " Indian Rupee "<< endl;  // Show in the display
        }
        break;

    case 2:
        cout << "Please enter British pound for exchange in Indian rupees : " << endl;
        cin >> pound;
        if (pound > 0)
        {
            B=pound*92.09;
            cout << pound << " British pound = " << B << " Indian Rupee " << endl;
        }
        break;
    case 3:
        cout << "Please enter Mexican peso for exchange into Indian Rupee : " << endl;
        cin >> mXpeso;
        if (mXpeso > 0)
        {
            M=mXpeso*3.93;
            cout << mXpeso << "Mexican peso = " << M << " Indian Rupee " << endl;
        }
        break;
    case 4:
        cout << "Please enter Japanese yen for exchange into Indian Rupee: " << endl;
        cin >> jPyen;
        if (jPyen > 0)
        {
            J=jPyen*0.57;
            cout << jPyen << "Japanese yen = " << J << " Indian Rupee "<< endl;
        }
        break;
    case 5:
        cout << "Please enter Pakistani Rupee for exchange into Indian Rupee : " << endl;
        cin >>pakRupee;
        if (pakRupee > 0)
        {
            P=pakRupee*00.36;
            cout << pakRupee << " Pakistan Rupee = " << P << " Indian Rupee " << endl;
        }
        break;

    }






}
