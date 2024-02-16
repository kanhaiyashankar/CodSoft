#include<iostream>
#include<ctime>

using namespace std;

int main()
{
    cout << "Guess The Number Between 0 to 100" << endl;
    srand(time(0));
    int random = 1+(rand()%99);
    int x ; 
    int count = 0;
    do{
        count++;
        cin >> x;
        if(100 > x && x > (random+10))
        {
            cout << "too high, try again with lower number" << endl ;
        }
        else if(100 > x && x > random)
        {
            cout << "high but nearer" << endl ;
        }
        else if (0 < x && x < (random-10))
        {
            cout << "too low, try again with lower number" << endl;
        }
        else if (0 < x && x < random)
        {
            cout << "low but nearer" << endl;
        }
        else if (x == random)
        {
        cout << "You Guesses the correct number in " << count << " attempts" << endl;
        }
        else 
        {
            cout << "Not in range. Please enter number between 0 to 100" << endl;
        }
        
    }
    while(x != random);

    return 0;
}