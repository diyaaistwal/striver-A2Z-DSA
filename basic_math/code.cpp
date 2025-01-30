1. count digits:
https://www.geeksforgeeks.org/problems/count-digits5716/1
int evenlyDivides(int n) {
        // code here
        int c=0;
        int t;
        int temp=n;
        while(temp>0)
        {
            t=temp%10;
            if(t!=0 && n%t==0)
            {
            c++;
            }
            
            temp=temp/10;
        }
        return c;
    }

2. reverse integer:
https://leetcode.com/problems/reverse-integer/
int reverse(int x) {
        long rev=0;
        while(x!=0)
        {
        long t=x%10;
        rev=rev*10+t;
        x=x/10;
        }
         if (rev > INT_MAX || rev < INT_MIN) {
                return 0;  // Return 0 if the result overflows
            }

        return rev;
    }

3. armstrong numbers:
https://www.geeksforgeeks.org/problems/armstrong-numbers2727/0
bool armstrongNumber(int n) {
        // code here
        int num=0;
        int t;
        int nn=n;
        while(nn>0)
        {
            t=nn%10;
            num=num+t*t*t;
            nn=nn/10;
        }
        if(num==n)
        return true;
        else
        return false;
        
        
    }

4. sum of divisors:
https://www.geeksforgeeks.org/problems/sum-of-all-divisors-from-1-to-n4738/1
int sumOfDivisors(int n) {
        // Write Your Code here
        int i,j;
        int sum;
        int total_sum=0;
        for(i=1;i<=n;i++)
        {
            sum=0;
            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                sum=sum+j;
            }
            total_sum+=sum;
        }
        return total_sum;
    }

5. minimum jumps:
https://www.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1
int minJumps(vector<int>& arr) {
        int n = arr.size();

    // If the array has one or no elements, no jump is needed
    if (n <= 1) return 0;

    // If the first element is 0, we can't move forward
    if (arr[0] == 0) return -1;

    // If the first element is larger than or equal to the last index, we can directly reach the end
    if (arr[0] >= n - 1) return 1;

    int jumps = 1;           // Start with 1 jump (since we already jump at least once)
    int farthest = arr[0];   // The farthest we can reach initially
    int current_end = arr[0]; // The end of the current jump range
    
    for (int i = 1; i < n; i++) {
        // Update the farthest we can reach
        farthest = max(farthest, i + arr[i]);
        
        // If we have reached the end of the current jump range
        if (i == current_end) {
            jumps++; // We need to make another jump
            current_end = farthest; // Update the range to the farthest point
            
            // If the farthest point can reach or exceed the last index, return jumps
            if (current_end >= n - 1) return jumps;
        }
    }
        
    return -1; // If we can't reach the end of the array
    }

6. check palindrome:
https://leetcode.com/problems/palindrome-number/submissions/1525101108/
bool isPalindrome(int x) {
        int n=x;
        int t;
        long rev=0;
        while(n>0)
        {
            t=n%10;
            rev=rev*10+t;
            n=n/10;
        }
        if(rev==x)
        return true;
        if(rev>INT_MAX || rev<INT_MIN )
        return false; 
        else
        return false;
        
    }

7. lcm and gcd:
https://www.geeksforgeeks.org/problems/lcm-and-gcd4516/1
vector<int> lcmAndGcd(int a, int b) {
        // code here
        int gcd = __gcd(a, b);
        int lcm = (a / gcd) * b;  // Avoids integer overflow
        return {lcm, gcd};
    }
