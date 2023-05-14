class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int count = 0;
        for (int i = 0; i < nums.size(); i++){
            int el = nums[i] ;
            for (int j = 0; j < nums.size(); j++ ){
                if( nums[j] == el){
                    count++;
                }
            }
            if (count == 1){
                return el;
            }
            count = 0;
        }
        return -1;
    }
};




int findUnique(int *arr, int size) {

    for (int i = 0; i < size; ++i)
    {
        int j = 0;

        for (; j < size; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                break;
            }
        }

        if (j == size)
        {
            return arr[i];
        }
    }
}