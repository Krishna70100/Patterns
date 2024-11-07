#include<iostream>
using namespace std;
void print1(int n){
    for(int i=0; i<n; i++){         //rows
        for(int j=0; j<n; j++){     //to print
            cout<<"* ";
        }
        cout<<endl;
    }
}

void print2(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void print3(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void print4(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

void print5(int n){
    for(int i=0; i<n; i++){
        for(int j=n; j>i; j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void print6(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=(n-i)+1; j++){
            cout<<j;
        }
        cout<<endl;
    }
}

void print7(int n){
    /*for(int i=0; i<n; i++){            //rows
        for(int j=1; j<=n-i-1; j++){     //spaces
            cout<<" ";      
        }
        for(int k=1; k<=2*i+1; k++){    //to print
            cout<<"*";
        }
        for(int j=1; j<=n-i; j++){      //spaces
            cout<<" ";
        }
        cout<<endl;
    }*/

    for(int i=1; i<=n; i++){            //rows
        for(int j=1; j<=n-i; j++){      //spaces
            cout<<" ";      
        }
        for(int k=1; k<=2*i-1; k++){    //to print
            cout<<"*";
        }
        for(int j=1; j<=n-i; j++){      //spaces
            cout<<" ";
        }
        cout<<endl;
    }
}

void print8(int n){
    for(int i=n; i>=1; i--){               //rows
        for(int j=1; j<=n-i; j++){            //spaces
            cout<<" ";
        }
        for(int k=1; k<=(2*i-1); k++){  //to print
            cout<<"*";
        }
        for(int j=1; j<=n-i; j++){             //spaces
            cout<<" ";
        }
        cout<<endl;
    }
}

void print9(int n){
    print7(n);
    print8(n);
}

void print10(int n){
    for(int i=1; i<=2*n-1; i++){
        int stars =i;
        if(i>n) stars=2*n-i;
        for(int j=1; j<=stars; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void print11(int n){
    int start = 1;
    for(int i=1; i<=n; i++){
        if(i%2==0) start = 1;
        else start = 0;
        for(int j=1; j<=i; j++){
            cout<<start<<" ";
            start = 1-start;
        }
        cout<<endl;
    }
}

void print12(int n){
    int spaces = 2*(n-1);
    for(int i=1; i<=n; i++){            //rows
        for(int j=1; j<=i; j++){        //spaces
            cout<<j;
        }
        for(int k=1; k<=spaces; k++){   //to print
                cout<<" ";
        }
        for(int j=i; j>=1; j--){        //spaces
                cout<<j;
        }
        spaces -= 2;
        cout<<"\n";
    }    
}

void print13(int n){
    int num = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<num<<" ";
            num = num + 1;
        }
        cout<<endl;
    }
}

void print14(int n){
    /*for(int i=0; i<n; i++){
        for(char ch='A'; ch<='A'+i; ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }*/

    for(int i=1; i<=n; i++){
        for(int j=65; j<65+i; j++){
            cout<<char(j)<<" ";
        }
        cout<<endl;
    }

    /*for(int i=1; i<=n; i++){
        for(int j=64; j<64+i; j++){
            cout<<char(j+1)<<" ";
        }
        cout<<endl;
    }*/
}

void print15(int n){
    /*for(int i=0; i<n; i++){
        for(int j=65; j<65+(n-i); j++){
            cout<<char(j);
        }
        cout<<endl;
    }

    for(int i=0; i<n; i++){
        for(char ch='A'; ch<'A'+(n-i); ch++){
            cout<<ch;
        }
        cout<<endl;
    }

   for(int i = n; i >= 1; i--){
    for(int j = 65; j < 65+i; j++){
        cout<<char(j);
    }
    cout<<endl;
   }*/

    for(int i=1; i<=n; i++){
        for(char ch='A'; ch<'A'+(n-i+1); ch++){
            cout<<ch;
        }
        cout<<endl;
    }
}

void print16(int n){
    for(int i=0; i<n; i++){
        //char ch = 'A'+i;
        int num = 65+i;
        for(int j=0; j<=i; j++){
            cout<<char(num);
        }
        cout<<"\n";
    }
}

void print17(int n){
    /*for(int i=0; i<n; i++){           //rows
        for(int j=0; j<n-i-1; j++){   //spaces
            cout<<" ";
        }
        int bp = (2*i+1)/2;
        char ch = 'A';
        for(int k=0; k<2*i+1; k++){ //to print
            cout<<ch;
            if(k < bp) ch++;
            else ch--;
        }
        for(int j=0; j<n-i-1; j++){ //spaces
            cout<<" ";
        }
    cout<<"\n";
    }*/

    for(int i=0; i<n; i++){           //rows
        for(int j=0; j<n-i-1; j++){   //spaces
            cout<<" ";
        }
        int bp = (2*i+1)/2;
        char ch = 'A';
        for(int k=1; k<=2*i+1; k++){ //to print
            cout<<ch;
            if(k <= bp) ch++;
            else ch--;
        }
        for(int j=0; j<n-i-1; j++){ //spaces
            cout<<" ";
        }
        cout<<"\n";
    }
}

void print18(int n){
    /*for(int i=0; i<n; i++){
        for(int j=65+(n-1)-i; j<=65+(n-1); j++){
            cout<<char(j);
        }
        cout<<"\n";
    }*/

    for(int i=1; i<=n; i++){
        for(char ch='A'+ n-i; ch<='A'+n-1; ch++){
            cout<<ch<<" ";
        }
        cout<<"\n";
    }
}

void print19(int n){
    //upper
    int inTspace=0;
    for(int i=1; i<=n; i++){             //rows
        for(int j=1; j<=n-i+1; j++){     //to print
            cout<<"*";
        }
        for(int k=1; k<=inTspace; k++){  //spaces
            cout<<" ";
        }
        for(int j=1; j<=n-i+1; j++){     //to print
            cout<<"*";
        }
        inTspace +=2;
        cout<<"\n";
    }
    //lower
    int space = 2*n-2;
    for(int i=1; i<=n; i++){              //rows
        for(int j=1; j<=i; j++){          //to print
            cout<<"*";
        }
        for(int k=1; k<=space; k++){      //spaces
            cout<<" ";
        }
        for(int j=1; j<=i; j++){          //to print
            cout<<"*";
        }
        space -=2;
        cout<<"\n";
    }
}

void print20(int n){
    int space = 2*n-2;
    for(int i=1; i<=2*n-1; i++){        //rows
        int stars = i;
        if(i>n) stars= 2*n-i;
        for(int j=1; j<=stars; j++){    //to print
            cout<<"*";
        }
        for(int k=1; k<=space; k++){    //spaces
            cout<<" ";
        }
        for(int j=1; j<=stars; j++){    //to print
            cout<<"*";
        }
        if(i<n) space -=2;
        else space +=2;
        cout<<"\n";
    }
}

void print21(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==1 || i==n || j==1 || j==n) cout<<"*";
            else cout<<" ";
        }
        cout<<"\n";
    }
}

void print22(int n){
    for(int i=0; i<2*n-1; i++){
        for(int j=0; j<2*n-1; j++){
            int top = i;
            int left = j;
            int right = (2*n-2)-j;
            int bottom = (2*n-2)-i; 
            cout<<n-min(min(top,bottom),min(left,right))<<" ";
        }
        cout<<"\n";
    }
}

////////////////////////////////////

int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        print22(n);
    }
}

///////////////////////////////////////