#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;

        vector<int> arr(N);
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());
        arr.erase(unique(arr.begin(), arr.end()), arr.end());

        int mex = 0;
        int len = 0;

        for (int i = 0; i < N; i++)
        {
            if (i == 0)
            {
                len = 1;
            }
            else
            {
                if (arr[i] == arr[i - 1] + 1)
                {
                    len++;
                }
                else
                {
                    mex = max(mex, len);
                    len = 1;
                }
            }
        }

        mex = max(mex, len);
        cout << mex << endl;
    }
}
