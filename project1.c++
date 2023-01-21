 #include <iostream>
  using namespace std;
//this is c++ code
  int main()
  {
  int a[2][2],b[1][2],mul[1][1],r,c,i,j,k;
  cout<<"enterthenumberofrow="<<endl;
  r=2,c=2;
  cout<<"enterthenumberofcolumn="<<endl;
  cout<<"enterthefirstmatrixelement= "<<endl;
  for(i=0;i<r;i++)
  {
  for(j=0;j<c;j++)
  {
  cin>>a[i][j];
  }
  }
  cout<<"enterthesecondmatrixelement= "<<endl;
  for(i=0;i<r;i++)
  {
  for(j=0;j<c;j++)
  {
  cin>>b[i][j];
  }
  }
  cout<<"multiplyofthematrix= "<<endl;
  for(i=0;i<r;i++)
  {
  for(j=0;j<c;j++)
  {
  mul[i][j]=0;
  for(k=0;k<c;k++)
  {
  mul[i][j]+=a[i][k]*b[k][j];
  }
  }
  }
  //forprintingresult
  for(i=0;i<r;i++)
  {
  for(j=0;j<c;j++)
  {
  cout<<mul[i][j]<<""<<endl;
  }
  cout<<"\n"<<endl;
  }
  return 0;
  }

#include<iostream>
using namespace std;
void most_occurred_number(int nums[], int size){
  int max_count = 0;
  cout << "\nMost occurred number: ";
  for (int i=0; i<size; i++){
   int count=1;
   for (int j=i+1;j<size;j++)
       if (nums[i]==nums[j])
           count++;
   if (count>max_count)
      max_count = count;
  }
  for (int i=0;i<size;i++){
   int count=1;
   for (int j=i+1;j<size;j++)
       if (nums[i]==nums[j])
           count++;
   if (count==max_count)
       cout << nums[i] << endl;
  }
 }
 int main(){
    int nums[] = {7, 5, 9, 12, 9, 22, 5, 7};
    int n = sizeof(nums)/sizeof(nums[0]);
    cout << "Original array: ";
    for (int i=0; i < n; i++) 
    cout << nums[i] <<" ";
    most_occurred_number(nums, n);
    return 0;
}
