class Solution {
public:
    int longestConsecutive(vector<int>& a) {
       int n =a.size();
       int longest = 1;
       if(a.size() == 0) return 0;
       unordered_set<int> st;
       for(int i=0; i<n ; i++){
         st.insert(a[i]);
       } 
       for(auto it: st){
        if(st.find( it -1 ) == st.end()){
            int cnt = 1;
            int x =it;
            while(st.find(x+1) != st.end()){
                x = x+1;
                cnt = cnt+1;

            }
            longest = max(longest,cnt);
        }

       }return longest;
    }
};