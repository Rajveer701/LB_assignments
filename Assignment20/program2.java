import java.util.*;

class Logic{
    public static void printReverse(int num){
        //Logic
        int iCnt = 0;
        for(iCnt=num;iCnt>=1;iCnt--){
            System.out.println(iCnt);
        }
    }
}

class program2{
    public static void main(String A[]){
        Logic obj = new Logic();
        obj.printReverse(10);
    }
}