#include <iostream>
using namespace std;

void reverseArray(vector<int> &arr)
{
    int n = arr.size();
    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        swap(arr[s], arr[e]);
        ++s, --e;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{

    return 0;
}
