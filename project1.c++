 #include <iostream>
  using namespace std;
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
