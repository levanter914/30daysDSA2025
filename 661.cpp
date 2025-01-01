class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int m=img.size();
        int n=img[0].size();

        vector<vector<int>> res(m,vector<int>(n,0));

        for(int r=0;r<m;r++){
            for(int c=0;c<n;c++){
                int total=0,count=0;

                for(int y=max(0,r-1);y<min(m,r+2);y++){
                    for(int z=max(0,c-1);z<min(n,c+2);z++){
                        total+=img[y][z];
                        count++;
                    }
                }

                res[r][c]=total/count;
            }
        }
        return res;
    }
};