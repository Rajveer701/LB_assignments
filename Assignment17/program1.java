import java.util.*;

class Logic{
    public static void SumOfDigits(int num){
        //Logic
        int iSum = 0;
        int iDigit = 0;

        while(num != 0){
            iDigit = num % 10;
            iSum = iSum + iDigit;
            num = num / 10;
        }

        System.out.println("Sum of digits: " + iSum);
    }
}

class program1{
    public static void main(String A[]){
        Logic obj = new Logic();
        obj.SumOfDigits(1234);
    }
}