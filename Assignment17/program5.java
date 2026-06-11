import java.util.*;

class Logic{
    public static void PrintTable(int num){
        //Logic
        int iCnt = 0;
        for(iCnt=1;iCnt<11;iCnt++){
            System.out.println(num*iCnt + "\n");
        }
    }
}

class program5{
    public static void main(String A[]){
        Logic obj = new Logic();
        obj.PrintTable(5);
    }
}