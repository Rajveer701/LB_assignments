import java.util.*;

class program2 {
    public static void main(String A[]) {
        Scanner sobj = new Scanner(System.in);

        int currentBalance = 0;
        int withdrawalAmount = 0;
        int remainingBalance = 0;

        System.out.println("Enter the current balance : ");
        currentBalance = sobj.nextInt();

        System.out.println("Enter the withdrawal amount : ");
        withdrawalAmount = sobj.nextInt();

        if(currentBalance < 0 || withdrawalAmount <= 0) {
            System.out.println("Invalid input");
        }
        else if(withdrawalAmount % 100 != 0 || withdrawalAmount > 25000) {
            System.out.println("Invalid withdrawal amount");
        }
        else {
            remainingBalance = currentBalance - withdrawalAmount;

            if(remainingBalance < 1000) {
                System.out.println("Transaction failed : Minimum balance must be 1000");
            }
            else {
                System.out.println("Transaction Successful");
                System.out.println("Remaining Balance : " + remainingBalance);
            }
        }
    }
}