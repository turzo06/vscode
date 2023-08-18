#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream Myfile("input.txt");
    int arr[4];
    int num,f=0;
    while (Myfile >> num){
       arr[f]=num;
       f++;
    }
    string tmp1,tmp2;
    for (int a=0; a<4; a++){
        for (int b=0; b<4; b++){
            if (arr[b] % arr[a] == 0)
                tmp1 += "(" + to_string(arr[a]) + "," + to_string(arr[b]) + "), ";
            if (arr[a] <= arr[b])
                tmp2 += "(" + to_string(arr[a]) + "," + to_string(arr[b]) + "), ";
        }
    }
    tmp1[tmp1.size() - 2] = '}';
    tmp1 = '{' + tmp1;
    tmp2[tmp2.size() - 2] = '}';
    tmp2 = '{' + tmp2;
    cout << "The pair list is for a/b : " <<tmp1 << endl;
    cout << "The pair list is for a<=b : "<<tmp2 << endl;
}