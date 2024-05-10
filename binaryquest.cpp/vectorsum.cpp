#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int sum;
    cout << "Enter the number for sum : ";
    cin >> sum;

    vector<int> value;
    int val;
    for (int i = 0; i < sum; i++)
    {
        cout << "Enter sum value " << i + 1 << ": ";
        cin >> val;
        value.push_back(val);
    }

    int sum = 0;
    cout << "Sum:- ";
    for (int i = 0; i < sum; i++)
    {

        if (i < sum - 1)
        {
            cout << value[i] << " + ";
        }
        else
        {
            cout << value[i] << " = ";
        }
        sum += value[i];
    }

    cout << sum << endl;
}