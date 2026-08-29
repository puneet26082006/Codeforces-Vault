#include <iostream>
#include <algorithm> // For std::swap

using namespace std;

int main() {
    // Speed up I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        long long l, a, b;
        cin >> l >> a >> b;

        // 1. Find GCD of b and l (Euclidean Algorithm)
        long long temp_b = b, temp_l = l;
        while (temp_l) {
            temp_b %= temp_l;
            swap(temp_b, temp_l);
        }
        long long g = temp_b;

        // 2. The reachable sections are those where (x % g) == (a % g)
        long long target_rem = a % g;
        long long last_section = l - 1;
        long long last_rem = last_section % g;

        // 3. Calculate the maximum prize
        long long ans;
        if (last_rem >= target_rem) {
            ans = last_section - (last_rem - target_rem);
        } else {
            ans = last_section - (last_rem + g - target_rem);
        }

        cout << ans << "\n";
    }
    return 0;
}