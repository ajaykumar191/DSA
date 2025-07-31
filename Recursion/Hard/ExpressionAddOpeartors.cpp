#include<bits/stdc++.h>
using namespace std;

void addOperators(vector<string>&result,string path, string num,int target, int index, long long eval, long long prevNum){
    if(index==num.size()){
        if(eval == target){
            result.push_back(path);
        }
        return;
    }

    for(int i = index;i<num.size();i++){

        if(i!=index && num[index]=='0') break;
        string currStr = num.substr(index, i-index+1);
        long long currNum = stoll(currStr);

        if(index ==0){
            addOperators(result,currStr,num,target,index+1, currNum, currNum);
        }else{

            addOperators(result,path+"+"+currStr,num,target,index+1,eval + currNum, currNum);
            addOperators(result,path+"-"+currStr,num,target,index+1,eval-currNum,currNum);
            addOperators(result,path+"*"+currStr,num,target,index+1, eval-prevNum + prevNum*currNum  ,prevNum*currNum);

        }
    }
}


int main(){

    string num ="123";
    int target = 6;
    vector<string>result;
    addOperators(result,"",num,target,0,0,0);

    for(auto it : result){
        cout<<it<<endl;
    }
    return 0;
}