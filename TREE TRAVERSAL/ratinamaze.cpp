#include<iostream>
using namespace std;
bool isPathSafe(int **arr, int x, int y, int n){
    if(x<n && y<n && arr[x][y]==1){
        return true;
    }
    return false;
}
bool ratInMaze(int **arr, int x, int y, int n, int ** resArray){
    //if the rat has reached the desitnation
    if (x==(n-1) && y==n-1){
        resArray[x][y]=1;
        return true;
    }
    //check whether the current position is safe
    if (isPathSafe(arr,x,y,n)){
        resArray[x][y]=1;
        //forward traversal
        if (ratInMaze(arr,x+1,y,n,resArray)){
            return true;
        }
        //downward traversal
        if (ratInMaze(arr, x, y+1, n, resArray)){
            return true;
        }
        resArray[x][y]=0;  //our analogy was wrong // backtracking
        return false;
    }
    return false;
}
int main(){
    int n;
    cout<<"enter the n value: ";
    cin >> n;
    int **arr= new int * [n];
    
    for(int i=0;i<n;i++){
        arr[i] = new int[n];  //each dynamic row

        for(int j=0;j<n;j++){
            cin >> arr[i][j];
        }
    }
    int **resArray = new int * [n];

    for(int i=0;i<n;i++){
        resArray[i] = new int[n];  //each dynamic row
        for(int j=0;j<n;j++){
            resArray[i][j]=0;
        }
    }
    if(ratInMaze(arr,0,0,n,resArray)){
        cout<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout << resArray[i][j] << " ";
            }
            cout << endl;
        }
    }
    else{
        cout<<"no solution exists"<<endl;
    }
    return 0;
}