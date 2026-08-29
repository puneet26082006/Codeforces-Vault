#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
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

        for(int i = 0 ; i < N ; i++){
            int target = N - i ;

            if(arr[i] != target){
                int target_idx = -1 ;
                for(int j = i + 1 ; j < N ; j++){
                    if(arr[j] == target){
                        target_idx = j ;
                        break ;
                    }
                }
                reverse(arr.begin() + i , arr.begin() + target_idx + 1) ;
                break;
            }

        }

        for(int i = 0 ; i < N ; i++){
            cout<< arr[i] << " " ;
        }
        cout << endl ;

    }

    
}
