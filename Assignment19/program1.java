import java.util.*;

class Logic{
    public static void checkLeapYear(int year){
        //Logic
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
            System.out.println(year + " is a Leap Year");
        } 
        else {
            System.out.println(year + " is not a Leap Year");
        }
    }
}

class program1{
    public static void main(String A[]){
        Logic obj = new Logic();
        obj.checkLeapYear(2024);
    }
}