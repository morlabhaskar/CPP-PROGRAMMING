Array :: Array(){
    cout<<"Default constructor : "<<endl;
    cout<<"Enter the no.of Elements : "<<endl;
    cin>>size;
    ptr = new int[size];
    for(int i=0;i<size;i++){
        cout<<"Enter the Element : "<<endl;
        cin>>ptr[i];
    }
}
Array :: Array(int *p,int s){
    cout<<"In Parameterised Contructor :"<<endl;
    size=s;
    ptr = new int[size];
    for(int i=0;i<size;i++){
        ptr[i] = p[i];
    }
}
Array :: Array(Array &obj){
    cout<<"Copy Constructor :"<<endl;
    size = obj.size;
    ptr = new int[size];
    for(int i=0;i<size;i++){
        ptr[i] = obj.ptr[i];
    }
}
void Array :: Print(){
    for(int i=0;i<size;i++){
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
}
void Array :: Reverse(){
    int temp;
    for(int i=0,j=size-1;i<j;i++,j--){
        temp = ptr[i];
        ptr[i] = ptr[j];
        ptr[j] = temp;
    }
}

void Array :: Sort(){
    int temp;
    for(int i=1;i<size;i++){
        for(int j=0;j<size-1;j++){
            if(ptr[j]>ptr[j+1]){
                temp = ptr[j];
                ptr[j] = ptr[j+1];
                ptr[j+1] = temp;
            }
        }
    }
}
Array :: ~Array(){
    cout<<"In Array Destructor"<<endl;
    delete []ptr;
}


