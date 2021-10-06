#include<iostream>
using namespace std;
int main()
{
 int row , col;
 cin>>row>>col;
 int matrix[row][col];
 int i , j;
 for(i=0;i<row;i++)
 {
  for(j=0;j<col;j++)
  {
   cin>>matrix[i][j];
  }
 }
 j=0;
 while(j<col)
 {
  for(i=0;i<row;i++)
  {
  cout<<matrix[i][j];
  }
  j++;
  if(j<col)
     {
      for(i=row-1;i>=0;i--)
      {
      cout<<matrix[i][j];
   }
  }
  j++;
 }
  return 0;
 }
