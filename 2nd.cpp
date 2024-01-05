#include<iostream>
using namespace std;
int main(){
     // cout << "Exampal of Pattern No.2 (Hollow rectangular) which cointain 4 row and 4 columns"
  //      << endl;
  // cout << "-------------------------------------" << endl;

  // int rowCount, colCount;
  // cout << "Enter rowCount" << endl;
  // cin >> rowCount;
  // cout << "Enter colCount" << endl;
  // cin >> colCount;

  // for (int row = 0; row < rowCount; row++) {
  //   if (row == 0 || row== rowCount - 1) {
  //     for (int col = 0; col < colCount; col++) {
  //       cout << "* ";
  //     }
  //   }
  //   else {
  //     cout << "* ";
  //     for (int i = 0; i < colCount - 2; i++) {
  //       cout << " ";
  //     }
  //     cout << "* ";
  //   }
  //   cout << endl;
  // }




  
  //  cout <<" Half Pyramid"<<endl;

  // cout << "-------------------------------------" << endl;

  // int n;
  // cout<<"Enter the no. of row"<<endl;
  // cin>>n;

  // for(int row=0;row<n;row++){
  //   for(int col=0;col<row+1;col++)
  //   {
  //     cout<<"* ";
  //   }
  //   cout<<endl;
  // }


  
   cout <<"Inverted Half Pyramid"<<endl;

  cout << "-------------------------------------" << endl;

  int n;
  cout<<"Enter the no. of row"<<endl;
  cin>>n;

  for(int row=0;row<n;row++){
    for(int col=0;col<n-row;col++)
    {
      cout<<"* ";
    }
    cout<<endl;
  }



  
  // cout << "Numaric Half Pyramid" << endl;

  // cout << "-------------------------------------" << endl;

  // int n;
  // cout << "Enter the no. of row" << endl;
  // cin >> n;

  // for (int row = 0; row < n; row++) {
  //   for (int col = 0; col < row + 1; col++) {
  //     cout << col + 1 ;
  //   }
  //   cout << endl;
  // }
  



  // cout << "Numaric inverted Half Pyramid" << endl;

  // cout << "-------------------------------------" << endl;

  // int n;
  // cout << "Enter the no. of row" << endl;
  // cin >> n;

  // for (int row = 0; row < n; row++) {
  //   for (int col = 0; col < n-row; col++) {
  //     cout << col + 1 ;
  //   }
  //   cout << endl;
  // } 


return 0;


}