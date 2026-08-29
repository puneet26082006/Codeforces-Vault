#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N, S, X;
        cin >> N >> S >> X;

        vector<int> arr(N);

        int sum = 0;
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }

        if(sum <= S && (sum - S)%X == 0){
            cout << "YES" << endl;
            
        } else {
            cout << "NO" << endl;
            
        }


    }
}