#include<iostream>
using namespace std;
class sta{
	public:
	int size, top;
	int *s;
	//Creating constructor to initialize the data values
	sta()
	{
	    size=5;
	    s=new int[size];
            top=-1;
	}
	sta(int s1)
	{
	    size=s1;
            s=new int[size];
	    top=-1;
	}
	//push method to elements insert in stack
	void push(int x)	
	{
		if(is_full())
		{
			// cout<<"\n No space ";
		}
		else
		{
			s[++top]=x;
			// cout<<"\n Value pushed is: "<<s[top];

		}
	}
	//pop method to remove elements in stack		
	int pop()
	{
		int x=-1;
		if(is_empty())
		{
			// cout<<"\n Stack is empty";
		}
		else
		{
			x=s[top--];
		}
		return x;
	}
	//is_full method will return true/false to classify whether stack is full or not
	bool is_full()
	{
		if(top==size-1)
			return true;
		else
			return false;
	}
	//is_empty method will return true/false to classify whether stack is empty or not
	bool is_empty()
	{
		if(top==-1)
			return true;
		else
			return false;
	}
	//display method will simply the data of stack by iteration
	void display()
	{
		cout<<"\n In Display method";
		if(top==-1)
			cout<<"\n No element to dispaly";
		else
			for(int i=top; i>=0; i--){
			
				cout<<"\n Value at index "<<i<<" is: "<<s[i];
			}
	}
};

int main()
{
string x;
    cout<<"\n Enter string to check: "<<endl;
	cin>>x;
	bool temp = true;
    int mid = (x.length())/2;
	if ( x.length()%2 == 0 )
	{   sta s(mid);
		for (int i = 0; i <= mid; i++)
		{
			s.push(x[i]);
		}
		for (int j = mid ; j < x.length(); j++)
		{
			 if(s.pop()!= x[j]){
            // cout<<"\nString is not palindrome"<<endl;
			temp = false;
            break;
        }
			
	}
	}
	else if (x.length()%2 != 0)
	{
		sta s(mid);
		for (int i = 0; i <= mid-1; i++)
		{
			s.push(x[i]);
		}
		for (int j = mid+1 ; j < x.length(); j++)
		{
			 if(s.pop()!= x[j]){
             temp = false;
             break;
        }
		}	
	}
	if (temp)
	{
		cout<<"\n Palindrome"<<endl;
	}
	else
	{
		cout<<"\n not Palindrome"<<endl;
	}
	
	return 0;
}

