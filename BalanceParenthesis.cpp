#include<iostream>
#include<stack>          // jo bracket last mai open hua vo sbse pehle bnd hoga - LIFO
using namespace std;

bool isBalanced(char *a)
{
    stack<char> s;
    for(int i=0;a[i]!='\0';i++)
    {
        char ch = a[i]; 
        switch (a[i])  // ch = a[i] 
        {
         case '(':  
         case'{':    
         case'[':                  
            s.push(a[i]);  
            break;
         case ')':
            if(!s.empty() and s.top() == '(')
            {
                s.pop();
            }
            else 
            {
                return false;
            }
            break;
         case '}':
            if(!s.empty() and s.top() == '{')
            {
                s.pop();
            }
            else
            {
                return false;
            }
            break;
         case ']':
                if(!s.empty() and s.top() == '[')
            {
                s.pop();
            }
            else
            {
                return false;
            }
            break;
            
        }
    }
  if(s.empty())
  {
      return true;
  }
  else
   {
      return false;
   }
 }
int main()
{
  char a[] = " {a+b*(c+d)+e8{f+g}}";
  if(isBalanced(a))
  {
      cout<<" balanced\n";
  }
  else
  {
      cout<<"not balanced balanced\n";
  }
  return 0;
}
