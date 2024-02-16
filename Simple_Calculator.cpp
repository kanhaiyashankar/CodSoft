#include<iostream> 

using namespace std;

int main()
{
    cout << "SIMPLE CALCULATOR" << endl;
    int a ;int b;
    while(true)
    {
        cout << '\n';
        cout  << "Type any no. from below operation:" << endl << "(1)Add" << " " << "(2)Subtract" << " " << "(3)Multiply" << " " 
        << "(4)Division" << " " << "(5)Exit" << endl;
        int x;
        cin >> x;
        if (x == 5)
        {
            goto exit;
        }
        cout << "Enter first number " ; cin >> a; cout << endl;
        cout << "Enter second number "; cin >> b; cout << endl;
        if (x > 0 && x < 5)
        {   
            switch (x)
            {
            case 1:
                cout << "Addition" << endl;
                cout << "Sum is " << a+b << endl;

                break;
            case 2:
                cout << "Subtraction" << endl;
                cout << "Difference is " << a-b << endl;

                break;
            case 3:
                cout << "Multiplication" << endl;
                cout << "Product is " << a*b << endl;

                break;
            case 4:
                cout << "Division" << endl;
                if(b != 0){
                    cout << "Quotient is " << a/b << " " << "Remainder is " << a%b << endl;}
                else{
                    cout << "undefine." << endl;
                }

                break;
            
            }
        }
        
        else{
            cout << "Invalid option. Type again correct number." << endl;
        }
    }
    exit:
        cout << "Thank You" << endl;
        return 0;
}