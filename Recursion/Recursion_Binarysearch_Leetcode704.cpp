
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int binSearch(vector<int>& arr,int tar ,int st,int end){
        if(st<=end){
            int mid=st+(end-st)/2;
            
            if(arr[mid]==tar){return mid;
                
            }
            else if(arr[mid]<tar){
                return binSearch(arr,tar,mid+1,end);
            }
            else{
                return binSearch (arr, tar,st,mid-1);
            }
        }
        return -1;
    }
    int search(vector<int>&arr,int tar){
        return binSearch (arr,tar,0,arr.size()-1);
    }
};
int main()
{
    Solution sol;
    vector <int>arr={2,4,7,9,13,20};
    int result = sol.search(arr,13);
    std::cout<<result;

    return 0;
}