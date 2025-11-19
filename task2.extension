#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
    string predictPartyVictory(string senate) {
        int n = senate.size();
        // vector as queues with front pointers
        vector<int> QR; // radiant queue
        vector<int> QD; // dire queue

        int frontR = 0, frontD = 0; // simulate queue front positions

        // fill queues based on senate
        for (int i = 0; i < n; i++) {
            if (senate[i] == 'R')
                QR.push_back(i);
            else
                QD.push_back(i);
        }

        // while both queues are not empty
        while (frontR < QR.size() && frontD < QD.size()) {

            int r = QR[frontR];
            int d = QD[frontD];

            frontR++;
            frontD++;

            if (r < d) {
                // Radiant acts first
                QR.push_back(r + n);
            } else {
                // Dire acts first
                QD.push_back(d + n);
            }
        }

        // check winner
        if (frontR < QR.size())
            return "Radiant";
        return "Dire";
    }
};

int main() {
    Solution s;
    string senate = "RDD";
    cout << s.predictPartyVictory(senate) << endl;
    return 0;
}
