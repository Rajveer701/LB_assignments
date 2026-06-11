import java.util.*;

class Logic {
    public static void findMax(int a, int b) {
        if(a > b){
            System.out.println(a +" is greater");
        } 
        else if(b > a){
            System.out.println(b +" is greater");
        } 
        else{
            System.out.println("Both numbers are equal");
        }
    }
}

class program3 {
    public static void main(String A[]) {
        Logic.findMax(20, 15);
    }
}