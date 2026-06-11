import java.util.*;

class Logic{
    public static void printDigits(int num){
        //Logic
        int iDigit = 0;
        while(num!=0){
            iDigit = num%10;
            System.out.println(iDigit);
            num = num/10;
        }
    }
}

class program4{
    public static void main(String A[]){
        Logic obj = new Logic();
        obj.printDigits(9876);
    }
}