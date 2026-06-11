import java.util.*;

class Logic{
    public static void findLargestDigit(int num){
        //Logic
        int iLarge = 0;
        int iDigit = 0;
        while(num!=0){
            iDigit = num%10;
            if(iDigit > iLarge){
                iLarge = iDigit;
            }
            num = num/10;
        }
        System.out.println(iLarge);
    }
}

class program4{
    public static void main(String A[]){
        Logic obj = new Logic();
        obj.findLargestDigit(83429);
    }
}