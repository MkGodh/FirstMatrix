#include <iostream>
#include <vector>

using namespace std;

int main()
{
    float matrix[4][4];


    cout << "Please input nums: ";

    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 1 + i; j < 4; ++j)
        {
            float tmp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = tmp;

        }
    }

    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}