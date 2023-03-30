#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;

    cin >> N >> M;

    vector<int> baskets(N);
    for (int i = 0; i < N; i++) {
        baskets[i] = i + 1;
    }

    for (int i = 0; i < M; i++) {
        int start, end;
        cin >> start >> end;
        start--;
        end--;
        for (int j = start; j < (start + end + 1) / 2; j++) {
            int temp = baskets[j];
            baskets[j] = baskets[start + end - j];
            baskets[start + end - j] = temp;
        }
    }

    for (int i = 0; i < N; i++) {
        cout << baskets[i] << " ";
    }
    cout << endl;

    return 0;
}
