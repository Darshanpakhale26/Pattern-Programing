// Program to print hollow rectangle pattern

#include<iostream>
using namespace std;

int main(){
    int rows,cols;
    cin>>rows>>cols;

    for(int i=1;i<=rows;i++){
        for(int j=1;j<=cols;j++){
            if(i==1 || i==rows || j==1 || j==cols){ // if it is first row or last row or first column or last column then print *
                cout<<"* ";
            }else{
                cout<<"  ";    // else print space
            }
        }
        cout<<endl;
    }

}