import java.util.*;

class Logic{
    public static void findSmallestDigit(int num){
        //Logic
        int iSmall = 11;
        int iDigit = 0;
        while(num!=0){
            iDigit = num%10;
            if(iDigit < iSmall){
                iSmall = iDigit;
            }
            num = num/10;
        }
        System.out.println(iSmall);
    }
}

class program5{
    public static void main(String A[]){
        Logic obj = new Logic();
        obj.findSmallestDigit(45872);
    }
}