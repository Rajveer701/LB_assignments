import java.util.*;

class Logic{
    public static void calculatePower(int base,int exp){
        //Logic
        int iRes = base;
        int iCnt = 0;
        for(iCnt = 1;iCnt<exp;iCnt++){
            iRes = iRes*base;
        }
        System.out.println(iRes);
    }
}

class program5{
    public static void main(String A[]){
        Logic obj = new Logic();
        obj.calculatePower(2,3);
    }
}