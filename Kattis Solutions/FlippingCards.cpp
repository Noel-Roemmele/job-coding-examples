#include<iostream>
#include<set>
#include<utility>
using namespace std;
int main() {
    int cases = 0;
    cin >> cases;
    for (int i = 0; i < cases; i++) {
        int cards = 0;
        cin >> cards;
        set<pair<int, int>> hand;
        int first = 0, second = 0;
        bool pos = true;
        for (int j = 0; j < cards; j++) {
            cin >> first >> second;
            hand.insert(make_pair(first, second));
            hand.insert(make_pair(second, first));
            if (hand.size() < (j + 1) * 2) {
                pos = false;
                break;
            }
        }
        if (pos) {
            cout << "possible" << endl;
        } else {
            cout << "impossible" << endl;
        }
    }
    return 0;
}