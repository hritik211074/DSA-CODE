#include<bits/stdc++.h>
using namespace std;
bool issafe(int i,int j,int row,int col,int arr[][4],vector<vector<bool>>&visited){
    if((i>=0 && i<row) && (j>=0 && j<col) && arr[i][j]==1 && visited[i][j]==false){
        return true;
    }
    else{
        return false;
    }
}
void solvemaze(int arr[][4],int row,int col,int i,int j,vector<vector<bool>>&visited,vector<string> &path,string output){
    if(i==row-1 && j==col-1){
        path.push_back(output);
        return ;
    }
    // for down
    if(issafe(i+1,j,row,col,arr,visited)){
        visited[i+1][j]=true;
        solvemaze(arr,row,col,i+1,j,visited,path,output+'D');
        visited[i+1][j]=false;
    }
    // for upper
    if(issafe(i-1,j,row,col,arr,visited)){
        visited[i-1][j]=true;
        solvemaze(arr,row,col,i-1,j,visited,path,output +'U');
        visited[i-1][j]=false;
    }
    // for right
    if(issafe(i,j+1,row,col,arr,visited)){
        visited[i][j+1]=true;
        solvemaze(arr,row,col,i,j+1,visited,path,output+'R');
        visited[i][j+1]=false;
    }
    // for left
    if(issafe(i,j-1,row,col,arr,visited)){
        visited[i][j-1]=true;
        solvemaze(arr,row,col,i,j-1,visited,path,output+'L');
        visited[i][j-1]=false;
    }

}
int main()
{
  int maze[4][4]={{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};
  if(maze[0][0]==0){
    cout<<"path not exist"<<endl;
    return 0;
  }
  int row=4;
  int col=4;
  vector<vector<bool>>visited(row,vector<bool>(col,false));
  visited[0][0]=true;

  
  vector<string>path;
  string output="";
  solvemaze(maze,row,col,0,0,visited,path,output);
  for(auto i:path){
    cout<<i<<" ";
  }
  return 0;
}