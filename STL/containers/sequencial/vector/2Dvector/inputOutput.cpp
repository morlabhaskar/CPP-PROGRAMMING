#include<iostream>
#include<vector>
int main(){
    std::vector<std::vector<int>> arr;
    int row,col,x;
    std::cout<<"Enter the Row Size : "<<std::endl;
    std::cin>>row;
    std::cout<<"Enter the Col Size : "<<std::endl;
    std::cin>>col;
    std::cout<<"Enter the Vector Elements : "<<std::endl;
    for(int i=0;i<row;i++){
        std::vector<int> d;
        for(int j=0;j<col;j++){
            std::cin>>x;
            d.push_back(x);
        }
        arr.push_back(d);
    }
    std::cout<<"Vector Elements are : "<<std::endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            std::cout<<arr[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
}