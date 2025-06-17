class Solution {
public:
    void dfs(vector<vector<int>>& image, int i, int j, int color, int originalColor) {
        // Check for out of bounds or different color
        if (i < 0 || j < 0 || i >= image.size() || j >= image[0].size() || image[i][j] != originalColor)
            return;

        // Change the color
        image[i][j] = color;

        // Call DFS on 4 directions
        dfs(image, i+1, j, color, originalColor); // down
        dfs(image, i-1, j, color, originalColor); // up
        dfs(image, i, j+1, color, originalColor); // right
        dfs(image, i, j-1, color, originalColor); // left
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int originalColor = image[sr][sc];
        if (originalColor == color) return image; // no change needed

        dfs(image, sr, sc, color, originalColor);
        return image;
    }
};