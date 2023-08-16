#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;  
    int row = 1;
    
    while(row<=n) {
        int t = n-row;
        int count = 1;
        while(t>=0) {
            cout<<count<<" ";
            count=count+1;
            t = t-1;
        }
        int col = 1;
        while(col < row){
            cout<<"* ";
            col=col+1;
        }
        int c = 1;
        while(c < row){
            cout<<"* ";
            c=c+1;
        }
        int f = n-row;
        int count1 = n-row+1;
        while(f>=0) {
            cout<<count1<<" ";
            count1=count1-1;
            f = f-1;
        }
        cout<<endl;
        row = row + 1;
    }
}
