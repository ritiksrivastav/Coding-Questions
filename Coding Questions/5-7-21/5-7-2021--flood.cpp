class Solution {
public:
    void flood(int sr, int sc, int pCol, int nCol, int r, int c,
               vector<vector<int>>& reached, vector<vector<int>>& image){
        if(sr < 0 || sr >= r || sc < 0 || sc >= c)
            return;
        
        else if(image[sr][sc] != pCol) 
            return;
        
        else if(reached[sr][sc] == 1) 
            return;
        
        else
        {
            reached[sr][sc] = 1; 
            image[sr][sc] = nCol;
            
            flood(sr+1, sc, pCol, nCol, r, c, reached, image); 
            flood(sr-1, sc, pCol, nCol, r, c, reached, image); 
            flood(sr, sc+1, pCol, nCol, r, c, reached, image); 
            flood(sr, sc-1, pCol, nCol, r, c, reached, image); 
            
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) 
    {
        int row = image.size();
        int col = image[0].size();
        int prevColor = image[sr][sc];
        vector<vector<int>> vis(row); 
        for(int i=0; i<row; i++)
            vis[i] = vector<int>(col, 0);        
        flood(sr, sc, prevColor, newColor, row, col, vis, image);
        return image;
    }
};
