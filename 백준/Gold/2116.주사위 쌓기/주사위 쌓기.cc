#include <bits/stdc++.h>
#define MAX 10002
#define INF 987654321
#define pii pair<int,int>
#define endl '\n'
#define ll long long
#define FASTMODE ios_base :: sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

int n;
int dice[MAX][6];
int cross[6]={5, 3, 4, 1, 2, 0};

int best_side(int bot,int i){
	int no1=dice[i][bot];
	int no2=dice[i][cross[bot]];
	int ret=-1;
	for(int j=1;j<=6;j++)
		if(j!=no1 && j!=no2)
			ret=max(ret,j);
	return ret;
}

int case_bottom(int bot){
	int ret=0;
	for(int i=0;i<n;i++){
		ret+=best_side(bot,i);
		if(i==n-1) break;
		int real_top=dice[i][cross[bot]];
		
		for(int j=0;j<6;j++){
			if(dice[i+1][j]==real_top){
				bot=j;
				break;
			}
		}
	}
	return ret;
}

int main(){
	FASTMODE;
	cin>>n;
	for(int j=0;j<n;j++)
		for(int i=0;i<6;i++)
			cin>>dice[j][i];
	int ans=0;
	for(int bot=0;bot<6;bot++)
		ans=max(ans,case_bottom(bot));
	cout<<ans;
}