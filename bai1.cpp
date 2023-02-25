#include <iostream>
using namespace std;

#define ROW 3
#define COL 3

bool lo_shu_magic_square(int squares[ROW][COL]){
   int sum = 0;

    for (int i = 0; i < ROW; i++) {
        sum = 0;
        for (int j = 0; j < COL; j++) {
            sum += squares[i][j];
        }
        if (sum != 15) {
            return false;
        }
    }

    sum = squares[0][0] + squares[1][1] + squares[2][2];
    if (sum != 15) {
        return false;
    }
    sum = squares[2][0] + squares[1][1] + squares[0][2];
    if (sum != 15) {
        return false;
    }

    return true;
}

int main() 
{
    int squares[ROW][COL];
    int numbers[]= {4,9,2,3,5,7,8,1,6};
    int count=-1;
    for(int i=0;i<ROW;i++){
        for(int j=0;j<COL;j++){
            count++;
            squares[i][j]= numbers[count];
        }
    }
    
for(int i=0;i<ROW;i++){
    for(int j=0;j<COL;j++){
    cout << squares[i][j] << "\t";
}
cout << endl;
}

if(lo_shu_magic_square(squares)){
    cout << "=> The array is a Lo Shu Magic Square";
}else{
    cout << "=> The array is not a Lo Shu Magic Square !";
}
}