void Matrix :: Input(){
    cout<<"Enter array Elements :"<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
}
void Matrix :: Print(){
    cout<<"Array is :"<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

Matrix Matrix :: Add(Matrix e){
    Matrix temp;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            temp.arr[i][j] = arr[i][j] + e.arr[i][j];
        }
    }
    return temp;
}

Matrix & Matrix :: Sub(Matrix &e){
    Matrix temp;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            temp.arr[i][j] = arr[i][j] + e.arr[i][j];
        }
    }
}
