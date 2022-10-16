public class knightTours {

    static boolean isSafe(int x, int y, int res[][])
	{
		return (x >= 0 && x < 6 && y >= 0 && y < 6 && res[x][y] == -1);
	}

    public static boolean solve(int x, int y, int move, int res[][], int moveX[], int moveY[]){
        if(move == 36)
            return true;

        int nextX, nextY;

        for(int i=0; i<8; i++){
            nextX = x + moveX[i];
            nextY = y + moveY[i];
            if(isSafe(nextX, nextY, res)){
                res[nextX][nextY] = move;
                if (solve(nextX, nextY, move + 1, res, moveX, moveY))
					return true;
				else
					res[nextX][nextY]= -1;
            }

        }
        return false;
    }

    public static void main(String[] args) {
        int res[][] = new int [6][6];
        for(int i=0; i<6; i++){
            for(int j=0; j<6; j++){
                res[i][j] = -1;
            }
        }
        int moveX[] = { 2, 1, -1, -2, -2, -1, 1, 2 };
		int moveY[] = { 1, 2, 2, 1, -1, -2, -2, -1 };
        res[0][0] = 0;

        if(solve(0, 0, 1, res, moveX, moveY)){
            for(int i=0; i<6; i++){
                for(int j=0; j<6; j++){
                    System.out.print(res[i][j] + " ");
                }
                System.out.println();
            }
        }
        else
            System.out.println("No path found");

    }
}
