// this program is all about shifting all zeroes to one side and non zeroes to the other in 2D matrix
#include<bits/stdc++.h>
using namespace std;
// solve problem takes the vector row and col as input
void solve_problem(vector<int> arr,int row,int col){
    vector<vector<int>> dp(row,vector<int> (col,0));
    int i,j,k=0;
    bool flag=true;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            if(k==arr.size()){
                flag=false;
                break;
            }
            dp[i][j]=arr[k];
            k++;
        }
        if(!flag) break;
    }
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<"\n";
    }
    return;
}
// main function
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int col,row,i,x;
    cin>>row>>col;
    vector<int> arr;
    for(i=0;i<row*col;i++){
        cin>>x;
        if(x!=0) arr.push_back(x);
    }
    solve_problem(arr,col,row);
    return 0;
}
// end of code