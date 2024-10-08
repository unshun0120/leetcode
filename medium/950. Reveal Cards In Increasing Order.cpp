//���ӨB�J�ϵ۰�

class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int i;
        
        sort(deck.begin(), deck.end(), greater<int>());
        deque<int> dq;

        for( i = 0; i < deck.size(); i++ ){
            if( !dq.empty() ){
                dq.push_front( dq.back() );
                dq.pop_back();
            }
            dq.push_front( deck[i] );
        }

        vector<int> ans(dq.begin(), dq.end());

        return ans;
    }
    
};
