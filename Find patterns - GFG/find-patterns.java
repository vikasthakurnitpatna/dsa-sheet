//{ Driver Code Starts
import java.io.*;
import java.util.*;

class GFG
{
    public static void main(String args[])throws IOException
    {
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while(t-- > 0)
        {
            String S = read.readLine();
            String W = read.readLine();

            Solution ob = new Solution();
            System.out.println(ob.numberOfSubsequences(S,W));
        }
    }
}

// } Driver Code Ends


//User function Template for Java

class Solution{
    static int numberOfSubsequences(String S, String W){
        // code here
          int w=0;

        StringBuilder sb=new StringBuilder(S);

        for(int i=0;i<sb.length();i++)

        {

            if(sb.charAt(i)==W.charAt(w))

            {

                w++;

                sb.setCharAt(i,' ');

            }

            if(w==W.length())

            return 1+numberOfSubsequences(sb.toString(),W);

      

        }

        return 0;
    }
}