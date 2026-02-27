// #include<iostream>
// using namespace std;
// int main(){
//     string s="hello";
//     cout<<"string : "<<s<<endl;
//     cout<<"size : "<<s.size()<<endl;//5
//     cout<<"length : "<<s.length()<<endl;//5
//     cout<<"check string empty or not : "<<s.empty()<<endl;
//     s.clear();//clear the string
//     cout<<"check string empty or not : "<<s.empty()<<endl;
//     s="nani";
//     cout<<"string : "<<s<<endl;
//     cout<<"check string empty or not : "<<s.empty()<<endl;
//     cout<<"position character : "<<s.at(1)<<endl;//0123.......
//     cout<<"position character : "<<s[0]<<endl;//0123.......
//     cout<<"first character : "<<s.front()<<endl;
//     cout<<"last character : "<<s.back()<<endl;
//     s.append(" morla");//s += " world";
//     cout<<"string : "<<s<<endl;//nani morla
//     s.push_back('.');
//     cout<<"string : "<<s<<endl;//nani morla.
//     s.pop_back();
//     cout<<"string : "<<s<<endl;//nani morla
//     s.insert(1,"xxx");
//     cout<<"string : "<<s<<endl;//nxxxani morla
//     s.erase(1,3);
//     cout<<"string : "<<s<<endl;//nani morla
//     s.replace(1,5,"xx");
//     cout<<"string : "<<s<<endl;//nxxorla
//     string x = s.substr(1,3);//xxo
//     cout<<"subString : "<<x<<endl;//xxo
//     cout<<"string : "<<s<<endl;//nxxorla
//     cout<<"substring found index : "<<s.find(x)<<endl;//1
//     cout<<"find first substring : "<<s.find_first_of("x")<<endl;//1
//     cout<<"find last substring : "<<s.find_last_of("x")<<endl;//2
//     cout<<"Compare : "<<s.compare("nxxorla")<<endl;//if same return 0
//     x.clear();
//     x="123";
//     // const char *ptr=x.c_str();//convert to c style string
//     int a = stoi("123");
//     cout<<a<<endl;
//     float f = stof("123.8");
//     cout<<f<<endl;
//     string str = to_string(100);
//     cout<<"convert string is : "<<str<<endl;
//     cout<<"string : "<<s<<endl;//nxxorla
//     for(auto it=s.begin();it!=s.end();it++){
//         cout<<*it<<" ";
//     }
// }
#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    x=5;
    y=++x * x--;
    z= ++y + --y;
    cout<<x<<","<<y<<","<<z;
}
