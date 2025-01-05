class Solution {
    private void dfs(int[][] image, int[][] ans, int row, int col, int[] delRow, int[] delCol, int newColor, int initialColor) {
        ans[row][col] = newColor;

        int n = image.length;
        int m = image[0].length;

        for (int i = 0; i < 4; i++) {
            int nrow = row + delRow[i];
            int ncol = col + delCol[i];

            if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && image[nrow][ncol] == initialColor
                    && ans[nrow][ncol] != newColor) {
                    dfs(image,ans,nrow,ncol,delRow,delCol,newColor,initialColor);
            }

        }

    }

    public int[][] floodFill(int[][] image, int sr, int sc, int color) {
        int initialColor = image[sr][sc];

        int delRow[] = { -1, 0, 1, 0 };
        int delCol[] = { 0, 1, 0, -1 };

        int[][] ans = image;

        dfs(image, ans, sr, sc, delRow, delCol, color, initialColor);

        return ans;

    }
}