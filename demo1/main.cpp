#include<iostream>
#include<vector>
using namespace std;
int max(vector<int>nums){
    vector<int>deque(nums);
    for(int i=1;i<nums.size();i++){
        int tem=deque[i-1]>0?deque[i-1]:0;
        deque[i]=deque[i]+tem;
    }
    int x=0;
    for(int i=0;i<deque.size();i++){
        if(deque[i]>x){
            x=deque[i];
        }
    }
    return x;
}

bool isIsomorphic(string str){
    int index=str.find(';');
    if(index==string::npos){
        return false;
    }
    string lStr=str.substr(0,index);
    string rStr=str.substr(index+1,str.length()-1);
    if(lStr.length()==0)return true;
       int i=0;

       while(i<lStr.length())
       {

           if(lStr.find(lStr[i])!=rStr.find(rStr[i]))
               return false;
           i++;

       }
      return true;

}

int main(){
    string str="[2,4,-2,5,-6]";
    str= str.substr(1,str.length()-2);
    int index=0;
    vector<int>nums;
    while(str.find(',')!=string::npos)
    {
        int n=atoi(str.substr(0,str.find(',')).c_str());
        nums.push_back(n);
        index=str.find(',');
        str=str.substr(index+1,str.length()-1);

    }
    //cout<<str;

    cout<<max(nums);


   cin>>str;
   cout<<isIsomorphic(str);


return 0;
}
