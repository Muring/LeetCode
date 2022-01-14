void getDistance(int** mat, int **result, int row, int col, int x, int y, int range)
{
    if(x >= row || x < 0 || y >= col || y < 0) return;
    if((range == 0 || mat[x][y] == 1) && (result[x][y] == 0 || result[x][y] > range))
    {
        result[x][y] = range;
        getDistance(mat, result, row, col, x-1, y, range + 1);
        getDistance(mat, result, row, col, x+1, y, range + 1);
        getDistance(mat, result, row, col, x, y-1, range + 1);
        getDistance(mat, result, row, col, x, y+1, range + 1);
    }
}

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** updateMatrix(int** mat, int matSize, int* matColSize, int* returnSize, int** returnColumnSizes){
    int ** result = (int **)calloc(matSize * (*matColSize), sizeof(int *));
    *returnSize = matSize;
    *returnColumnSizes = (int *)malloc(matSize*sizeof(int));
    
    for(int i=0; i<matSize; i++)
    {
        (*returnColumnSizes)[i] = *matColSize;  //returnColumnSizes의 열 맞추기
        result[i] = (int *)calloc(*matColSize, sizeof(int));    //result 배열 천제를 0으로 초기화
    }
    
    for(int i=0; i<matSize; i++)
        for(int j=0; j<*matColSize; j++)
            if(mat[i][j] == 0)
                getDistance(mat, result, matSize, *matColSize, i, j, 0);
    
    return result;
}