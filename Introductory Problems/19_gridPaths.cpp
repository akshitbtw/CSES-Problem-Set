#include<bits/stdc++.h>
using namespace std;

#define ll long long;
int MOD = 1e9+7;

template<typename T>
void printv(const vector<T>& v) { for(auto i:v) cout<<i<<' '; cout<<'\n'; }

int solve(int x, int y, int sz, string &path, vector<vector<int>> &board, string &s){
	if(sz && s[sz-1]!='?' && s[sz-1]!=path[sz-1]){
		return 0;
	} 

	if(x==6 && y==0){
		if(sz!=48) return 0;
		return 1;
	}
	
	// cant move left and right but can move upwards and downwards
	if((((y-1)>=0 && board[x][y-1]==1) || (y-1)<0) && (((y+1)<7 && board[x][y+1]==1) || (y+1)>=7) && ((x+1)<7 && board[x+1][y]==0) && ((x-1)>=0 && board[x-1][y]==0)) return 0;
	
	// cant move up and down but can move towards left and right
	if((((x-1)>=0 && board[x-1][y]==1) || (x-1)<0) && (((x+1)<7 && board[x+1][y]==1) || (x+1)>=7) && ((y+1)<7 && board[x][y+1]==0) && ((y-1)>=0 && board[x][y-1]==0)) return 0;

	int cnt = 0;
	if((x-1)>=0 && !board[x-1][y]){
		path+='U';
		board[x-1][y]=1;
		cnt += solve(x-1, y, sz+1, path, board, s);
		board[x-1][y]=0;
		path.pop_back();
	} 
	if((x+1)<7 && !board[x+1][y]){
		path+='D';
		board[x+1][y]=1;
		cnt += solve(x+1, y, sz+1, path, board, s);
		board[x+1][y]=0;
		path.pop_back();
	} 
	if((y-1)>=0 && !board[x][y-1]){
		path+='L';
		board[x][y-1]=1;
		cnt += solve(x, y-1, sz+1, path, board, s);
		board[x][y-1]=0;
		path.pop_back();
	} 
	if((y+1)<7 && !board[x][y+1]){
		path+='R';
		board[x][y+1]=1;
		cnt += solve(x, y+1, sz+1, path, board, s);
		board[x][y+1]=0;
		path.pop_back();
	} 
	return cnt;
}

int main()
{
	string s; cin>>s;
	vector<vector<int>>board(7, vector<int>(7, 0));
	string path="";
	board[0][0]=1;
	cout<<solve(0, 0, 0, path, board, s);
	cout<<"\n";
	return 0;
}