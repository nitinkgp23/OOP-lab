class library{
	int[][] mat = new int[50][50];
	library(){
		for(int i=0;i<50;i++){
			for(int j=0;j<50;j++){
				mat[i][j]=0;
			}
		}
	}
	void issue(int x, int y){
		int flag=0;
		for(int i=0; i<50;i++){
			if(mat[i][y] == 1)
				flag=1;
		}
		if (flag==1)
			System.out.println("Book already issued");
		else
			mat[x][y] =  1;
	}
	void st(int x){
		for(int i=0; i<50;i++){
			if(mat[x][i] == 1)
				System.out.print(i);
		}
	}
	void book(int x){
		for(int i=0; i<50;i++){
			if(mat[i][x] == 1)
				System.out.print(i);
		}
	}
	public static void main(String args[]){
		library x = new library();
		x.issue(12,17);
		x.issue(41,21);
		x.issue(12,21);
		x.st(12);
		x.book(21);
	}
}
