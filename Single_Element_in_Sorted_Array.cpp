#include<iostream>
#include<vector>
using namespace std;

int SingleElement(vector<int> nums){
    int n = nums.size();
    int st = 0;
    int end = n-1;

    if(n==1){
        return nums[0];
    }

    while(st<=end){

        int mid = st + (end-st) / 2;

        if(mid == 0 && nums[mid] != nums[mid+1]){
            return nums[mid];
        }

        if(mid == n-1 && nums[mid] != nums[mid-1]){
            return nums[mid];
        }

        if(nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1]){
            return nums[mid];
        }

        if(mid%2 == 0){ //even no of elements in left & right search space
            if(nums[mid] == nums[mid-1]){ 
                end = mid-1;
            }
            else{
                st = mid+1;
            }
        }
        else{   //odd no of elements in left & right search space
            if(nums[mid] == nums[mid-1]){
                st = mid+1;
            }
            else{
                end = mid-1;
            }
        }
    }

    return 0;
}

int main(){

    vector<int> nums = {1,1,2,3,3,4,4,5,5};

    cout << SingleElement(nums) << endl;
}