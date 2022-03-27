

#include <iostream>
using namespace std;
void board();
int arr[9]={0,0,0,0,0,0,0,0,0};
void checkwin();

int main(){
    cout<<"Tic Tac Toe game";
    cout<<"Each player has two inputs the first input is  for the number  the place he wants to play in"
          "from [1,2,3,4,5,6,7,8,9]  in the game board  "
          "the second input is for the number he wants to play with "
          "first player  plays by odd numbers and second player  plays with even numbers "<<endl;

//    int arr[9]={0,0,0,0,0,0,0,0,0};

    board();
    // first player with odd numbers and second player with even numbers
    int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13,n14,n15,n16,n17,n18;
//------------------------------------------ one
    cout<<"first player turn : "<<endl;
    cout<<"\a";
    cout<<"choose the place you want to play in : ";
    cin>>n1; //place you want to play with
    cout<<"choose the number you want to play with : ";
    cin>>n2; // number you want to play with
// if condition to check odd and even
    if((n2%2==0)||(n2>9)){
        cout<<"enter odd number please less than or egual to 9 !!!";
        cin>>n2;
    }
    arr[n1-1]=n2;
    board();
    checkwin();
    //--------------------------------------------two
    cout<<"second player turn : "<<endl;
    cout<<"\a";
    cout<<"choose the place you want to play in : "<<endl;
    cin>>n3;
    cout<<"choose the number you want to play with : "<<endl;
    cin>>n4;
    if((n4%2!=0)|| (n4>9)){
        cout<<"enter even number please less than or egual to 9  !!!";
        cin>>n4;

    }

    arr[n3-1]=n4;
    board();
    checkwin();
    //--------------------------------------------three

    cout<<"first player turn : "<<endl;
    cout<<"\a";
    cout<<"choose the place you want to play in : "<<endl;
    cin>>n5;
    cout<<"choose the number you want to play with : "<<endl;
    cin>>n6;
    if((n6%2==0)||(n6>9)){
        cout<<"enter odd number please less than or egual to 9  !!!";
        cin>>n6;

    }
    arr[n5-1]=n6;
    board();
    checkwin();
    //--------------------------------------------four

    cout<<"second player turn : "<<endl;
    cout<<"\a";
    cout<<"choose the place you want to play in : "<<endl;
    cin>>n7;
    cout<<"choose the number you want to play with : "<<endl;
    cin>>n8;
    if((n8%2!=0)||n8>9){
        cout<<"enter even number please less than or egual to 9 !!!";
        cin>>n8;

    }

    arr[n7-1]=n8;
    board();
    checkwin();
//--------------------------------------------five

    cout<<"first player turn : "<<endl;
    cout<<"\a";
    cout<<"choose the place you want to play in : "<<endl;
    cin>>n9;
    cout<<"choose the number you want to play with : "<<endl;
    cin>>n10;
    if((n10%2==0)||n10>9){
        cout<<"enter odd number please less than or egual to 9 !!!";
        cin>>n10;
    }
    arr[n9-1]=n10;
    board();
    checkwin();
//--------------------------------------------six

    cout<<"second player turn : "<<endl;
    cout<<"\a";
    cout<<"choose the place you want to play in : "<<endl;
    cin>>n11;
    cout<<"choose the number you want to play with : "<<endl;
    cin>>n12;
    if((n12%2!=0)||n12>9){
        cout<<"enter even number please less than or egual to 9 !!!";
        cin>>n12;

    }

    arr[n11-1]=n12;
    board();
    checkwin();
//--------------------------------------------seven

    cout<<"first player turn : "<<endl;
    cout<<"\a";
    cout<<"choose the place you want to play in : "<<endl;
    cin>>n13;
    cout<<"choose the number you want to play with : "<<endl;
    cin>>n14;
    if((n14%2==0)||n14>9){
        cout<<"enter odd number please !!!";
        cin>>n14;

    }
    arr[n13-1]=n14;
    board();
    checkwin();
    //--------------------------------------------eight

    cout<<"second player turn : "<<endl;
    cout<<"\a";
    cout<<"choose the place you want to play in : "<<endl;
    cin>>n15;
    cout<<"choose the number you want to play with : "<<endl;
    cin>>n16;
    if((n16%2!=0)||n16>9){
        cout<<"enter even number please less than or egual to 9 !!!";
        cin>>n16;

    }
    arr[n15-1]=n16;
    board();
    checkwin();
//--------------------------------------------nine

    cout<<"first player turn : "<<endl;
    cout<<"\a";
    cout<<"choose the place you want to play in : "<<endl;
    cin>>n17;
    cout<<"choose the number you want to play with : "<<endl;
    cin>>n18;
    if((n18%2==0)||n18>9){
        cout<<"enter odd number please less than or egual to 9 !!!";
        cin>>n18;

    }
    arr[n17-1]=n18;
    board();
    checkwin();
    // check if user the number twice
    if(arr[0]==arr[1]==arr[2]==arr[3]==arr[4]==arr[5]==arr[6]==arr[7]==arr[8]){
        cout<<"you break the rules and enter the same number twice ";
    }




}
// function to print the game board
void board() {

    for (int i = 0; i < 9; i++) {
        cout << "|" << arr[i];
        if (i == 2 || i == 5 || i == 8) {
            cout << endl;

        }
    }
}
//function to check for a win or tie
void checkwin() {

    if ((arr[0] + arr[1] + arr[2]) >= 15 and arr[0] % 2 == 0 and arr[1] % 2 == 0 and arr[2] % 2 == 0) {
        cout << "congratulations player 2 you win ";
        cout << "\a";
        cout << "\a" << endl;

    } else if ((arr[0] + arr[1] + arr[2]) >= 15 and arr[0] % 2 != 0 and arr[1] % 2 != 0 and arr[2] % 2 != 0) {
        cout << "congratulations player 1 you win ";
        cout << "\a";
        cout << "\a" << endl;

    }
//second case to win
    else if ((arr[3] + arr[4] + arr[5]) >= 15 and arr[3] % 2 == 0 and arr[4] % 2 == 0 and arr[5] % 2 == 0) {
        cout << "congratulations player 2 you win ";
        cout << "\a";
        cout << "\a" << endl;

    } else if ((arr[3] + arr[4] + arr[5]) >= 15 and arr[3] % 2 != 0 and arr[4] % 2 != 0 and arr[5] % 2 != 0) {
        cout << "congratulations player 1 you win ";
        cout << "\a";
        cout << "\a" << endl;

    }
// third case to win
    else if ((arr[6] + arr[7] + arr[8]) >= 15 and arr[6] % 2 != 0 and arr[7] % 2 != 0 and arr[8] % 2 != 0) {
        cout << "congratulations player 1 you win ";
        cout << "\a";
        cout << "\a" << endl;

    } else if ((arr[6] + arr[7] + arr[8]) >= 15 and arr[6] % 2 == 0 and arr[7] % 2 == 0 and arr[8] % 2 == 0) {
        cout << "congratulations player 2 you win ";
        cout << "\a";
        cout << "\a" << endl;

    }
// forth case to win
    else if ((arr[0] + arr[4] + arr[8]) >= 15 and arr[0] % 2 != 0 and arr[4] % 2 != 0 and arr[8] % 2 != 0) {
        cout << "congratulations player 1 you win ";
        cout << "\a";
        cout << "\a" << endl;

    } else if ((arr[0] + arr[4] + arr[8]) >= 15 and arr[0] % 2 == 0 and arr[4] % 2 == 0 and arr[8] % 2 == 0) {
        cout << "congratulations player 2 you win ";
        cout << "\a";
        cout << "\a" << endl;

    }
//fifth case to win
    else if ((arr[2] + arr[4] + arr[6]) >= 15 and arr[2] % 2 != 0 and arr[4] % 2 != 0 and arr[6] % 2 != 0) {
        cout << "congratulations player 1 you win ";
        cout << "\a";
        cout << "\a" << endl;

    } else if ((arr[2] + arr[4] + arr[6]) >= 15 and arr[2] % 2 == 0 and arr[4] % 2 == 0 and arr[6] % 2 == 0) {
        cout << "congratulations player 2 you win ";
        cout << "\a";
        cout << "\a" << endl;

    }
    else{
        cout<<"continue it's a tie."<<endl<<endl;
    }


}
