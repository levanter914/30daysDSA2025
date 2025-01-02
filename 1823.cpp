class Solution {
public:
    int findTheWinner(int n, int k) {
        //FIRST
        if(n==1) return 1;
        return (findTheWinner(n-1,k)+(k-1))%n+1;

        //SECOND
        /*
        int winner = 0; 
        for (int i = 2; i <= n; i++) {
            winner = (winner + k) % i; 
        }
        return winner + 1;
        */
        
        //THIRD
        /*
        vector<bool> friends(n,false);//false mtlb they are in the game
        int count=n;
        int curr=0;
        
        while(count>1){
            for(int i=0;i<k; ){
                while(friends[curr]){//ith friend is not in the game
                    curr=(curr+1)%n; //to keep in range
                }
                i++;
                if(i<k)
                    curr=(curr+1)%n;
            }
            friends[curr]=true; //EVICTED
            count--;
        }

        for(int i=0;i<n;i++){
            if(!friends[i]) return i+1;
        }
        return -1;
        */
    }
};