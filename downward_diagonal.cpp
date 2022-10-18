//this is a matrix cp problem.
//in this we'll print the matrix in diagonally order.(Basically reverse diagonally order)

vector<int> downwardDigonal(int N, vector<vector<int>> A)
	{
	vector<int>ans;
	int row=0;
	int col=0;
	while(col<N){
	    int r=row;
	    int c=col;
	    while(r<N&&c>=0){
	        ans.push_back(A[r][c]);
	        r++;
	        c--;
	        
	    }
	    col++;
	    
	}
	col=N-1;
	row=1;
	while(row<N){
	    int r=row;
	    int c=col;
	  while(r<N&&c>=0){
	        ans.push_back(A[r][c]);
	        r++;
	        c--;
	        
	    }
	    row++;
	}
	return ans;
	}
