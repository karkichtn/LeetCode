class Solution {
public:
    int mySqrt(int x) {

        // if(x<0)
        // return 0;
        // if(x == 0)
        // return 0;

        // for(int i=1; i <= x; i++)
        // {
        //     if((long long)i*i > x)
        //     {
        //         return i-1;
        //     }
        //     if((long long)i*i == x)
        //     {
        //         return i;
        //     }
        // } 
        // return x; 




        // part 2 by binary search


        if(x<2)
        return x;

        int start=0, end=x, mid, ans;

        while(start<=end)
        {
            mid = start + (end - start)/2;

            if (mid==x/mid)
            {
                ans = mid;
                break;
            }

            else if(mid<x/mid)
            {
                ans = mid;
                start = mid + 1;
            }

            //mid*mid>end
            else
            end = mid - 1;

        }
        return ans;
              
    }
};