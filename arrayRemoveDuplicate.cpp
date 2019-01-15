#include <iostream>
#include <vector>
using namespace std;
#define INPUT_NUMBER_COUNT 10
int removeDuplicates(vector<int>& nums)
{
    if(nums.end() == nums.begin()) return 0;
    for(std::vector<int>::iterator i = nums.begin(); i + 1 != nums.end();)
    {

            if(*i == *(i+1) )
            {
                i=nums.erase(i);
            }
            else
            {
                i++;
            }
    }
    return nums.size();
}

int main()
{
    std::vector<int> vList;
    int n = 0;
    std::cout << "ENTER "<< INPUT_NUMBER_COUNT <<" numbers " << std::endl;
    for(int i = 0; i<INPUT_NUMBER_COUNT; i++) {
        cin>>n;
        vList.push_back(n);
        n = 0;
    }
    cout<<"New Array length is " << removeDuplicates(vList) << endl;
    for(std::vector<int>::iterator i = vList.begin(); i != vList.end(); i++) {

        std::cout << " ELEMENT : " << *i << std::endl;
    }
    return 0;
}
