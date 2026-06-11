import java.util.*;

class Logic{
    public static void displayGrade(int marks){
        //Logic
        if(marks < 20){
            System.out.println("Unsatisfactory");
        }
        else if(marks > 20 && marks < 40){
            System.out.println("Below Average");
        }
        else if(marks > 40 && marks < 60){
            System.out.println("Average");
        }
        else if(marks > 60 && marks < 80){
            System.out.println("Good");
        }
        else{
            System.out.println("Excellent");
        }
    }
}

class program2{
    public static void main(String A[]){
        Logic obj = new Logic();
        obj.displayGrade(82);
    }
}