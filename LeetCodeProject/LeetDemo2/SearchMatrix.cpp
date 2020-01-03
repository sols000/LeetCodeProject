#include "pch.h"
#include "SearchMatrix.h"


void LeetDemo2::TestCase()
{
	vector<vector<int>> matrix =
		//{  { 1, 2, 4, 7,11}
		//  ,{ 3, 6, 7,10,18}
		//  ,{ 5, 8, 9,11,22}
		//  ,{12,14,18,35,36} };
		//{{1,  2,  3,  7,  8}
		//,{5, 10, 14, 16, 19}
		//,{8, 10, 18, 19, 23}
		//,{9, 12, 22, 24, 29} };
		{ {4,  9,   9, 11, 12, 15, 17, 22, 23}
		 ,{8,  10, 11, 14, 14, 17, 20, 23, 26}
		 ,{9,  13, 16, 21, 23, 26, 30, 35, 36}
		 ,{9,  14, 18, 21, 26, 29, 32, 35, 39}
		 ,{12, 18, 19, 23, 27, 33, 34, 37, 39}
		 ,{15, 20, 24, 26, 32, 34, 36, 39, 42}
		 ,{16, 24, 28, 28, 33, 37, 37, 43, 44}
		 ,{18, 28, 28, 29, 35, 42, 44, 49, 52}
		 ,{23, 32, 34, 34, 39, 46, 51, 51, 56}
		 ,{27, 35, 35, 40, 45, 47, 51, 55, 58} };
	//{{ 1,  4,  7, 11, 15}
 //  , { 2,  5,  8, 12, 19}
 //  , { 3,  6,  9, 16, 22}
 //  , {10, 13, 14, 17, 24}
 //  , {18, 21, 23, 26, 30}};
	/*{ {5},{6} };*/

	bool Res = searchMatrix(matrix,41);
	cout << "Res:" << Res << endl;
}

//搜索方向: Downward First
bool LeetDemo2::searchMatrix(vector<vector<int>>& matrix, int target)
{
	int NumRow = matrix.size();
	if (NumRow == 0) return false;
	int NumCol = matrix[0].size();
	//从左下角开始
	int Col = NumCol-1, Row = 0;
	while (Row< NumRow&&Col>=0)
	{
		//如果当前值
		if (matrix[Row][Col] == target) return true;
		if (matrix[Row][Col] > target)//MoveLeft
		{
			Col--;
		}
		else//MoveDown
		{
			Row++;
		}
	}
	return false;
}

//官方的案例
bool LeetDemo2::searchMatrix1(vector<vector<int>>& matrix, int target)
{
	if (matrix.size() == 0) {
		return false;
	}
	int row = matrix.size();
	int col = matrix[0].size();
	int posX = 0;
	int posY = col - 1;
	//从右上角往左下角找
	while (posX < row && posY >= 0) {
		if (matrix[posX][posY] == target) {
			return true;
		}
		if (matrix[posX][posY] > target) {
			posY--;
		}
		else {
			posX++;
		}
	}
	return false;
}

