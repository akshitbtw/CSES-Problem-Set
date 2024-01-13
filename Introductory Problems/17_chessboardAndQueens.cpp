#include<bits/stdc++.h>
using namespace std;

#define ll long long
int MOD = 1e9+7;

template<typename T>
void printv(const vector<T>& v) { for(auto i:v) cout<<i<<' '; cout<<'\n'; }

bool check(int &x, int &y, vector<string>&board){
	// check upper left diagonal
	for(int i=x-1, j=y-1; i>=0 && j>=0; i--, j--){
		if(board[i][j]=='#') return false;
	}
	// check upwards
	for(int i=x-1; i>=0; i--){
		if(board[i][y]=='#') return false;
	}
	// check upper right diagonal
	for(int i=x-1, j=y+1; i>=0 && j<8; i--, j++){
		if(board[i][j]=='#') return false;
	}
	return true;
}

int solve(int row, vector<string>&board){
	if(row==8) return 1;
	int cnt=0;
	for(int j=0; j<8; j++){
		if(board[row][j]=='.' && check(row, j, board)){
			board[row][j]='#';
			cnt+=(solve(row+1, board));
			board[row][j]='.';
		}
	}
	return cnt;
}

int main()
{
	vector<string>board;
	string s="";
	for(int i=0; i<8; i++){
		cin>>s;
		board.push_back(s);
	}
	cout<<solve(0, board);
	cout<<"\n";
	return 0;
}

/*

. -- free
* -- reserved

*/