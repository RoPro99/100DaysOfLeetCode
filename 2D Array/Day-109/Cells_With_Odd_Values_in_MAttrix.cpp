class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
         int count=0;
        int sk[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
            sk[i][j]=0;
            }

        }
    
        for(int i=0;i<indices.size();i++){
/////////first filing row as value 1; with i=0; 
            for(int j=0;j<n;j++){
                //[[1,2,1],[0,0,0]]
                sk[indices[i][0]][j]+=1;
            }
            /////////first filing column as value 1;
            for(int j=0;j<m;j++){
                //[[1,1,1],[0,2,0]]
                sk[j][indices[i][1]]+=1;
            }
    }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(sk[i][j]%2!=0){
                    count++;
                }
            }
        }
        
        
        return count;
        
    }
};