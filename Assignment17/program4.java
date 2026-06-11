import java.util.*;

class Logic {
    public static void findMin(int a, int b,int c) {
        if(a > b && a > c){
            System.out.println(a +" is greatest");
        }
        else if(b > a && b > c){
            System.out.println(b +" is greatest");
        }
        else if(c > a && c > b){
            System.out.println(c +" is greatest");
        }
        else{
            System.out.println("They are equal");
        }
    }
}

class program4{
    public static void main(String A[]) {
        Logic.findMin(3,7,2);
    }
}