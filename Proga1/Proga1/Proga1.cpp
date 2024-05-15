#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

bool PrimeNum(int);
void MultiplesOfThree(int[], int);
void PairedNum(int[], int);

int main()
{
    const int size = 10;
    int arr[size], k, PrArr[size], PrCout = 0;
    srand(time(0));

    for (int i = 0; i < size; i++)
        arr[i] = rand() % 11 + 1;

    cout << "Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    while (true)
    {
        cout << "\nMENU:\n";
        cout << "1 - Prime num\n";
        cout << "2 - Multiples of three\n";
        cout << "3 - Paired num\n";
        cout << "0 - Exit\n";
        cout << "Enter: ";
        cin >> k;

        switch (k)
        {
        case 1:
            cout << "\nPrime num: ";
            for (int i = 0; i < size; i++)
            {
                if (PrimeNum(arr[i])) 
                {
                    PrArr[PrCout] = arr[i];
                    PrCout++;
                }
            }
            for (int i = 0; i < PrCout; i++)
                cout << PrArr[i] << " ";
            cout << endl;
            break;
        case 2:
            cout << "\nMultiples of three: ";
            MultiplesOfThree(arr, size);
            break;
        case 3:
            cout << "\nPaired num: ";
            PairedNum(arr, size);
            break;
        case 0:
            cout << "\nEXIT\n";
            return 0;
        default:
            cout << "ERROR!";
            break;
        }
    }
}

bool PrimeNum(int num)
{
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

void MultiplesOfThree(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 3 == 0)
            cout << arr[i] << " ";
    }
    cout << endl;
}

void PairedNum(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
            cout << arr[i] << " ";
    }
    cout << endl;
}