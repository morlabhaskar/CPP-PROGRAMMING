#include<iostream>
using namespace std;
class Matrix{
    int arr[2][2];
    public:
        Matrix(){
            cout<<"Constructor"<<endl;
        }
        void Print(){
            for(int i=0;i<2;i++){
                for(int j=0;j<2;j++){
                    cout<<arr[i][j]<<" ";
                }
                cout<<endl;
            }
        }
        void Input(){
            for(int i=0;i<2;i++){
                for(int j=0;j<2;j++){
                    cin>>arr[i][j];
                }
            }
        }
        // Matrix & operator+(Matrix &a){
        //     static Matrix temp;
        //     for(int i=0;i<2;i++){
        //         for(int j=0;j<2;j++){
        //             temp.arr[i][j]=arr[i][j]+a.arr[i][j];
        //         }
        //     }
        //     return temp;
        // }
        // Matrix & operator-(Matrix &a){
        //     static Matrix temp;
        //     for(int i=0;i<2;i++){
        //         for(int j=0;j<2;j++){
        //             temp.arr[i][j]=arr[i][j]-a.arr[i][j];
        //         }
        //     }
        //     return temp;
        // }
        // Matrix & operator+(int a){
        //     static Matrix temp;
        //     for(int i=0;i<2;i++){
        //         for(int j=0;j<2;j++){
        //             temp.arr[i][j]=arr[i][j]+a;
        //         }
        //     }
        //     return temp;
        // }
        // Matrix & operator-(int a){
        //     static Matrix temp;
        //     for(int i=0;i<2;i++){
        //         for(int j=0;j<2;j++){
        //             temp.arr[i][j]=arr[i][j]-a;
        //         }
        //     }
        //     return temp;
        // }
        // Matrix & operator++(){
        //     //pre-inc
        //     for(int i=0;i<2;i++){
        //         for(int j=0;j<2;j++){
        //             ++arr[i][j];
        //         }
        //     }
        //     return *this;
        // }
        // Matrix & operator++(int){
        //     //post-inc
        //     static Matrix temp;
        //     for(int i=0;i<2;i++){
        //         for(int j=0;j<2;j++){
        //             temp.arr[i][j]=arr[i][j]++;
        //         }
        //     }
        //     return temp;
        // }
        // Matrix & operator--(){
        //     //pre-inc
        //     for(int i=0;i<2;i++){
        //         for(int j=0;j<2;j++){
        //             --arr[i][j];
        //         }
        //     }
        //     return *this;
        // }
        // Matrix & operator--(int){
        //     //post-inc
        //     static Matrix temp;
        //     for(int i=0;i<2;i++){
        //         for(int j=0;j<2;j++){
        //             temp.arr[i][j]=arr[i][j]--;
        //         }
        //     }
        //     return temp;
        // }
        friend Matrix operator+(Matrix,Matrix);
        friend Matrix & operator-(Matrix&,Matrix&);
        friend Matrix & operator+(Matrix&,int);
        friend Matrix & operator-(Matrix&,int);
        friend Matrix & operator++(Matrix&);
        friend Matrix & operator++(Matrix&,int);
        friend Matrix & operator--(Matrix&);
        friend Matrix & operator--(Matrix&,int);
        // friend void operator>>(istream &,Matrix &);
        // friend void operator<<(ostream &,Matrix &);

};
// void operator>>(istream &in,Matrix &a){
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){

//         }
//     }
// }
Matrix operator+(Matrix a,Matrix b){
    Matrix temp;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            temp.arr[i][j]=a.arr[i][j]+b.arr[i][j];
        }
    }
    return temp;
}
Matrix & operator-(Matrix &a,Matrix &b){
    static Matrix temp;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            temp.arr[i][j]=a.arr[i][j]-b.arr[i][j];
        }
    }
    return temp;
}
Matrix & operator+(Matrix &a,int x){
    static Matrix temp;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            temp.arr[i][j]=a.arr[i][j]+x;
        }
    }
    return temp;
}
Matrix & operator-(Matrix &a,int x){
    static Matrix temp;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            temp.arr[i][j]=a.arr[i][j]-x;
        }
    }
    return temp;
}
Matrix & operator++(Matrix &a){
    //pre-inc
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            ++a.arr[i][j];
        }
    }
    return a;
}
Matrix & operator++(Matrix &a,int){
    //post-inc
    static Matrix temp;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            temp.arr[i][j]=a.arr[i][j]++;
        }
    }
    return temp;
}
Matrix & operator--(Matrix &a){
    //pre-inc
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            --a.arr[i][j];
        }
    }
    return a;
}
Matrix & operator--(Matrix &a,int){
    //post-inc
    static Matrix temp;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            temp.arr[i][j]=a.arr[i][j]--;
        }
    }
    return temp;
}
int main(){
    Matrix a,b,c,d,e,f,g,h,i,j;
    cout<<"a : Input "<<endl;
    a.Input();
    cout<<"b : Input "<<endl;
    b.Input();
    c=a+b;//a.operator+(b)
    d=a-b;
    e=a+2;
    f=a-2;
    g=a++;
    h=++a;
    i=a--;
    j=--a;
    cout<<"a : Print "<<endl;
    a.Print();
    cout<<"b : Print "<<endl;
    b.Print();
    cout<<"c : obj+obj "<<endl;
    c.Print();
    cout<<"d : obj-obj "<<endl;
    d.Print();
    cout<<"e : obj+int "<<endl;
    e.Print();
    cout<<"f : obj-int "<<endl;
    f.Print();
    cout<<"g : obj++ "<<endl;
    g.Print();
    cout<<"a : Print "<<endl;
    a.Print();
    cout<<"h : ++obj "<<endl;
    h.Print();
    cout<<"a : Print "<<endl;
    a.Print();
    cout<<"i : obj-- "<<endl;
    i.Print();
    cout<<"a : Print "<<endl;
    a.Print();
    cout<<"j : --obj "<<endl;
    j.Print();
    cout<<"a : Print "<<endl;
    a.Print();
}