#include <iostream>
using namespace std;
int main()
{
    int target;
    cout << "enter the target";
    cin >> target;
    cout << "enter  the  size  of array : ";
    int n;
    cin >> n;
    cout << "enter the  array: ";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n  -1  ; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                cout <<i <<" " << j;
            }
        }
        cout << endl;
    }
}