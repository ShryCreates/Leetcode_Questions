class Solution {
public:
    int maxDepth(string s) {
        int current=0;
        int p=0;
        for(char c:s){
            if(c=='('){
                current++;
                p=max(p,current);
            }
            else if(c==')'){
                current--;
            }
        }
        return p;
    }
};
