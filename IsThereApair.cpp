#include <iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

bool IsThereApair(int array_number,int second_number,vector<int> &s)
{

int first, last, middle ;
   first = 0;
   last = array_number - 1;
   middle = (first+last)/2;
   while (first <= last) {
      if (s[middle] < second_number)
       {
         first = middle + 1;
                  }
      else if (s[middle] == second_number) {
            return true;
         break;
      }
      else
      {
         last = middle - 1;
         }
      middle = (first + last)/2;
   }
   if (first > last)
    return false;
}

int main()
{
 int the_number=0;
   int array_number=0;
   int exist=0;
   int Count=0;
    scanf("%d  %d",&array_number,&the_number);
   int i=0;
    vector<int> s(array_number);
   while (i<array_number)
   {
      scanf("%d",&s[i]);
      i++;
   }
   sort(s.begin(),s.end());
   int sec_number=0;
   for(int i=0;i<array_number;i++)
   {
        sec_number= the_number-s[i];
        if(sec_number==s[i])
       Count=count(s.begin(),s.end(),s[i]);
      
   if(IsThereApair(array_number,sec_number,s))
   {
  if(sec_number!=s[i])
    exist++;
  else if(Count>=2&&sec_number==s[i])
    exist++;
  
   }}
    if(exist>0)
   cout<<"YES"<<endl;
   else
       cout<<"NO"<<endl;

       return 0;
}
