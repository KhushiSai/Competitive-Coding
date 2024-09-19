//{ Driver Code Starts
// C++ program to calculate sum of all numbers present
// in a string containing alphanumeric characters
#include <iostream>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to calculate sum of all numbers present in a string.
    int findSum(string str)
    {
    	
    	// Your code here
    	int sum=0;
    	string currentnum="";
    	for(char c :str){
    	    if(isdigit(c)){
    	        currentnum +=c;
    	    }
    	    else if(!currentnum.empty()){
    	        sum+=stoi(currentnum);
    	        currentnum="";
    	    }
    	}
    	if(!currentnum.empty()){
    	    sum+=stoi(currentnum);
    	}
    	return sum;
    	
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{
	// input alphanumeric string
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    Solution obj;
	    cout << obj.findSum(str);
        cout<<endl;
	}
	return 0;
}

// } Driver Code Ends