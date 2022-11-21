#include<iostream>
using namespace std;
int main()
{
  char s1[30],s2[30],ch;
  int count=0;
  gets(s1);
  gets(s2);
  for(int i=0;s2[i]!='\0';i++)
  {
    ch=s2[i];
  }
  for(int i=0;s1[i]!='\0';i++)
  {
    if (s1[i]==ch)
    {
      count+=1;
    }
  }
  cout << count;
  return 0;
}
