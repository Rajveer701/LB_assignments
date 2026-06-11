import java.util.*;

class Logic{
    public static void CheckSign(int num){
        //Logic
        if(num>0){
            System.out.println(num + " is positive" );
        }
        else if(num < 0){
            System.out.println(num + " is negative" );
        }
        else{
            System.out.println(num + " is zero" );
        }
    }
}

class program5{
    public static void main(String A[]){
        Logic obj = new Logic();
        obj.CheckSign(-12);
    }
}