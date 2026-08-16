#include<iostream>
using namespace std;

int main(){

    int rows = 0, cols = 0;

    cout << "Enter number of rows : ";
    cin >> rows;

    cout << "Enter number of columns : ";
    cin >> cols;

    if(rows <= 0 || cols <= 0){
        cout << "Invalid Input" << endl;
        return 0;
    }

    int seats[5][10] = {0};

    int bookedCount;

    cout << "Enter number of booked seats : ";
    cin >> bookedCount;

    for(int i = 0; i < bookedCount; i++){

        int r, c;

        cout << "Enter booked seat row and column : ";
        cin >> r >> c;

        if(r < 1 || r > rows || c < 1 || c > cols){
            cout << "Invalid Seat" << endl;
            return 0;
        }

        seats[r - 1][c - 1] = 1;
    }

    int requestedCount;

    cout << "Enter number of requested seats : ";
    cin >> requestedCount;

    if(requestedCount <= 0){
        cout << "Invalid Input" << endl;
        return 0;
    }

    int requestedRow[requestedCount];
    int requestedCol[requestedCount];

    bool success = true;

    for(int i = 0; i < requestedCount; i++){

        int r, c;

        cout << "Enter requested seat row and column : ";
        cin >> r >> c;

        if(r < 1 || r > rows || c < 1 || c > cols){
            success = false;
            cout << "Invalid seat" << endl;
            break;
        }

        if(seats[r - 1][c - 1] == 1){
            success = false;
            cout << "Seat already booked" << endl;
            break;
        }

        requestedRow[i] = r;
        requestedCol[i] = c;
    }

    if(!success){

        cout << "Booking Failed" << endl;
        return 0;
    }

    double totalCost = 0;

    for(int i = 0; i < requestedCount; i++){

        int row = requestedRow[i];

        int price;

        if(row == 1)
            price = 150;
        else if(row == 2)
            price = 200;
        else if(row == 3)
            price = 250;
        else if(row == 4)
            price = 300;
        else
            price = 350;

        totalCost += price;

        seats[row - 1][requestedCol[i] - 1] = 1;
    }

    if(requestedCount >= 6){
        totalCost = totalCost * 0.90;
    }

    int remainingSeats = 0;

    for(int i = 0; i < rows; i++){

        for(int j = 0; j < cols; j++){

            if(seats[i][j] == 0){
                remainingSeats++;
            }
        }
    }

    cout << "Booking Successful" << endl;
    cout << "Total Cost: ₹" << totalCost << endl;
    cout << "Remaining Seats: " << remainingSeats << endl;

    return 0;
}