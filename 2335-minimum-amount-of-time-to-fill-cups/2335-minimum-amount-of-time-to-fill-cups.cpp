class Solution {
public:
    int fillCups(vector<int>& amount) {
        priority_queue<int> pq;
        for(int x : amount) {
            if(x > 0)
                pq.push(x);
        }
        int seconds = 0;
        while(!pq.empty()) {
            int first = pq.top();
            pq.pop();
            int second = 0;

            if(!pq.empty()) {
                second = pq.top();
                pq.pop();
            }

            first--;
            second--;

            seconds++;

            if(first > 0) pq.push(first);
            if(second > 0) pq.push(second);
        }

        return seconds;
    }
};