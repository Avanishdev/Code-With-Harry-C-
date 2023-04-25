// #include<iostream>
// int main(){
//     std::cout<<"Hello World\a";
    
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int sum=0;
//     for(int i=1;i<=n;i++){
//         //cout<<i<<endl;
//         sum=sum+i;
//     }
//     cout<<"Sum of these nums is/are "<<sum<<endl;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a=0;
//     int b=1;

//     cout<<"Fibonacci Series of first "<<n<<" num/s is "<<a<<' '<<b<<" ";
//     for(int i=1;i<=n;i++){
        
//            int fibNum=a+b;
//             cout<<fibNum<<' ';
//             a=b;
//             b=fibNum;
        
//     }

// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             cout<<"Not Prime"<<endl;
//             break;
//         }
//         else{
//             cout<<"Prime Num"<<endl;
//             break;
//         }
//     }
// }      //  ---Or---
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int bol=1;

//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             bol=0;
//         }
//     }
//     if(bol==0){
//         cout<<"Not a Prime Num"<<endl;
//     }
//     else{
// cout<<"A Prime Num"<<endl;
//     }

// }

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=0;i<=15;i+=2){
//        cout<<i<<endl;
//         int j=-1;
//         if(j&1){//if i=0,the condition is false but if i!=0, i.e. the condition is true
//             cout<<"jk";
//              continue;
//          }
//         i++;
// }
// }


// --STAR PATTERN--

// #include<iostream>
// using namespace std;

// int main(){

//         int n;
//         cin>>n;

//     int i=1;

//     while(i<=n){

//     int j=n;
        
//         while(j>0){
//         cout<<j;
//         j--;
//     }
//         cout<<endl;
//         i++;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
   
//     int n;
//     cin>>n;
   
//     int i=1;
//     int count=1;
    
//     while(i<=n){
    
//     int j=1;

//     while(j<=n){

//         cout<<count;
//         count=count+1;
//         j++;
//     }
//     cout<<endl;

//     i++;
// }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int row=1;
//     // int count=1;
//     while(row<=n){
       
//         int col=1;
//         // int val=row;
//         while(col<=row){
        
//         cout<<row+col-1;
//         // val=val+1;
//         // count=count+1;
//         col++;
//         }
//     cout<<endl;
//     row++;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int row=1;
        
//     while(row<=n){
//         int col=1;
//         while(col<=row){
            
//             char ch=('A'+row+col-2);
//             cout<<ch;
//             // ch=ch+1;
//             col=col+1;
//         }
//         cout<<endl;
//         row=row+1;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int row=1;
//     while(row<=n){
//         int col=1;
//             int star=n-row+1;
//         while(star){
//             cout<<'*';
//             star--;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
// int row=1;
//     while(row<=n){
//         int space=n-row+1;
// while(space){
//     cout<<' ';
//     space--;
// }
// int col=1;
// while(col<=row){
// cout<<'*';
// col++;
// }
// cout<<endl;
// row++;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int row=1;
//     int count=1;
//     while(row<=n){
//         //space
//         int space=row-1;
//         while(space){
//             cout<<' ';
//             space--;
//         }
//         //count
//         int col=n-row+1;
//         while(col){
//             cout<<count;
//             col--;
//         }
//         cout<<endl;
//         count=count+1;
//         row++;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){

// int n;
// cin>>n;

// int row=1;
// int count=1;
// while(row<=n){
//     //space
//     int space=n-row;
//     while(space){
//         cout<<' ';
//         space--;
//     }
//     //count
//     int col=row;
//     while(col){
//         cout<<count;
//         col--;
//     }
//     cout<<endl;
//     row++;
//     count=count+1;
// }
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cin>>n;

// int row=1;
// int val=1;
// while(row<=n){
//     //space
//     int space=n-row;
//     while(space){
//         cout<<' ';
//         space--;
//     }
//     //val
    
//     int col=1;
    
//     while(col<=row){
//         cout<<val;
//         val=val+1;
//         col++;
//     }
//     cout<<endl;
//     row=row+1;

// }

// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int row=1;
//     // int val=row;
//     while(row<=n){
//         //space
//         int space=row-1;
//         while(space){
//             cout<<' ';
//             space--;
//         }
//         //count
//         int col=n-row+1;
//         int colu=1;
//         while(col){
           
//             int val=colu+row-1;
//             cout<<val;
//             // val=val+1;
//             col--;
//             colu++;
            
//         }
//         cout<<endl;
//         row++;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int row=1;
//     while(row<=n){
//         //space
//         int space=n-row;
//         while(space){
//             cout<<' ';
//             space--;
//         }
//         //col1
//         int col=1;
//         while(col<=row){
//             int val=col;
//             cout<<val;
//             val=val+1;
//             col++;
            
//         }
//         //start
//         int start=row-1;
//         while(start){
//             // int val2=row-1;
//             cout<<start;
//             // val2=val2-1;
//             start--;
//         }
//         cout<<endl;
//         row++;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int row=1;
//     while(row<=n){
//       //num
     
//       int col=1;
//       while(col<=n-row+1){
//         cout<<col;
        
//         col++;
//       }
//       //star
//       int start=(row-1)*2;
//       while(start){
//         cout<<'*';
//         start--;
//       }
//       //num2
   
//       col=n-row+1;
      
//       while(col>=1){
        
//         cout<<col;
        
//         col--;
        
//       }
//       cout<<endl;
//       row++;
//     }
// }

//**
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int row=1;
//     while(row<=n){
//         int start=row-1;
//         while(start){
//             cout<<'*'<<' ';
//             start--;
//         }
//         int col=n-row+1;
//         while(col>=1){
//             cout<<col<<' ';
//             col--;
//         }
//         cout<<endl;
//         row++;
//     }
// }