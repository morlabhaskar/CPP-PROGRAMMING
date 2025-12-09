Array :: Array(){
	cout<<"In default constructor:"<<endl;
	cout<<"Enter the size:"<<endl;
	cin>>size;
	ptr=new int[size];
	for(int i=0;i<size;i++){
		cout<<"Enter the element:"<<endl;
		cin>>ptr[i];
	}
}
Array :: Array(int *q,int s){
	cout<<"In parameterised constructor:"<<endl;
	size=s;
	ptr=new int[size];
	for(int i=0;i<size;i++){
		ptr[i]=q[i];
    }
}
Array :: Array(Array &obj){
	cout<<"In copy constructor:"<<endl;
	size=obj.size;
	ptr=new int[size];
	for(int i=0;i<size;i++){
		ptr[i]=obj.ptr[i];
    }
}
void Array :: Print(){
	for(int i=0;i<size;i++){
		cout<<ptr[i]<<" ";
	}
	cout<<endl;
}
void Array :: Sort(){
	int i,j,t;
	for(i=1;i<size;i++){
		for(j=0;j<size-i;j++){	
            if(ptr[j]>ptr[j+1]){
				t=ptr[j];
				ptr[j]=ptr[j+1];
				ptr[j+1]=t;
			}
		}
	}
}
void Array :: Reverse(){
	int i,j,t;
	for(i=0,j=size-1;i<j;i++,j--){
		t=ptr[i];
		ptr[i]=ptr[j];
		ptr[j]=t;
	}
}
