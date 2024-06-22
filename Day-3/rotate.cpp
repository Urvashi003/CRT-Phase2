
//nxn - o(n2)
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i=0; i<n; i++){
            for(int j=0  ; j<i; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for(int i=0; i<n ;i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};


//nxm
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>>temp(n, vector<int>(n,0));
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                temp[j][i]= matrix[i][j];
            }
        }
        for(int i=0; i<n; i++){
            reverse(temp[i].begin(), temp[i].end());
        }
        //copy back
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                matrix[i][j]= temp[i][j];
            }
        }
    }
};