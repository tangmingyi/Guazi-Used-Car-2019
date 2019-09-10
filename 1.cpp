//
// Created by tmy on 19-9-10.
//
#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<string> split(const string &str, const string &pattern)
{
    vector<string> res;
    if(str == "")
        return res;
    //在字符串末尾也加入分隔符，方便截取最后一段
    string strs = str + pattern;
    size_t pos = strs.find(pattern);

    while(pos != strs.npos)
    {
        string temp = strs.substr(0, pos);
        res.push_back(temp);
        //去掉已分割的字符串,在剩下的字符串中进行分割
        strs = strs.substr(pos+1, strs.size());
        pos = strs.find(pattern);
    }

    return res;
}
void test(){
    std::string a = "this is test char!";
    std::vector<std::string> list;
    list = split(a," ");
    int cc = 0;

}

int main(){
//    test();
    std::string input,output;
    std::cin>>input;
    std::vector<std::string> strings;
    strings = split(input," ");
    for(auto Iter = strings.end();Iter!=strings.begin();Iter--){
        if(output==""){
            output = (*Iter);
        } else {
            output += (*Iter);
        }
    }
    std::cout<<output;
    return 0;
}
