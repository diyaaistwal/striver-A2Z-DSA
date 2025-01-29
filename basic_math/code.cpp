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
