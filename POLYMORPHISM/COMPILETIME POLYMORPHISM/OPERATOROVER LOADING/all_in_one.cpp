#include<iostream>
using namespace std;
class Matrix{
    int arr[2][2];
    public:
        // void Print(){
        //     for(int i=0;i<2;i++){
        //         for(int j=0;j<2;j++){
        //             cout<<arr[i][j]<<" ";
        //         }
        //         cout<<endl;
        //     }
        // }
        // void Input(){
        //     for(int i=0;i<2;i++){
        //         for(int j=0;j<2;j++){
        //             cin>>arr[i][j];
        //         }
        //     }
        // }
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
        friend void operator>>(istream &,Matrix &);
        friend void operator<<(ostream &,Matrix &);

};
void operator>>(istream &in,Matrix &a){
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            in>>a.arr[i][j];
        }
    }
}
void operator<<(ostream &out,Matrix &a){
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            out<<a.arr[i][j]<<" ";
        }
        out<<endl;
    }
}
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
    // a.Input();
    cin>>a;
    cout<<"b : Input "<<endl;
    // b.Input();
    cin>>b;
    c=a+b;//a.operator+(b)
    d=a-b;
    e=a+2;
    f=a-2;
    g=a++;
    h=++a;
    i=a--;
    j=--a;
    cout<<"a : Print "<<endl;
    // a.Print();
    cout<<a;
    cout<<"b : Print "<<endl;
    // b.Print();
    cout<<b;
    cout<<"c : obj+obj "<<endl;
    // c.Print();
    cout<<c;
    cout<<"d : obj-obj "<<endl;
    // d.Print();
    cout<<d;
    cout<<"e : obj+int "<<endl;
    // e.Print();
    cout<<e;
    cout<<"f : obj-int "<<endl;
    // f.Print();
    cout<<f;
    cout<<"g : obj++ "<<endl;
    // g.Print();
    cout<<g;
    cout<<"a : Print "<<endl;
    // a.Print();
    cout<<a;
    cout<<"h : ++obj "<<endl;
    // h.Print();
    cout<<h;
    cout<<"a : Print "<<endl;
    // a.Print();
    cout<<a;
    cout<<"i : obj-- "<<endl;
    // i.Print();
    cout<<i;
    cout<<"a : Print "<<endl;
    // a.Print();
    cout<<a;
    cout<<"j : --obj "<<endl;
    // j.Print();
    cout<<j;
    cout<<"a : Print "<<endl;
    // a.Print();
    cout<<a;
}

/*
a : Input 
1 2 3 4 
b : Input 
5 6 7 8
a : Print 
1 2
3 4
b : Print
5 6
7 8
c : obj+obj
6 8
10 12
d : obj-obj
-4 -4
-4 -4
e : obj+int
3 4
5 6
f : obj-int
-1 0
1 2
g : obj++
1 2
3 4
a : Print
1 2
3 4
h : ++obj
3 4
5 6
a : Print
1 2
3 4
i : obj--
3 4
5 6
a : Print
1 2
3 4
j : --obj
1 2
3 4
a : Print
1 2
3 4
*/