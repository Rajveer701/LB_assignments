import java.util.*;

class Logic{
    public boolean ChkBool(long iNo){
        long iMask = 0x4000;
        long iAns = 0;

        iAns = iNo & iMask;

        if(iAns == iMask){
            return true;
        }
        else{
            return false;
        }
    }
}

class program1 {
    public static void main(String A[]){
        Scanner sobj = new Scanner(System.in);
        long iValue = 0;
        boolean bRet = false;

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        Logic lobj = new Logic();

        bRet = lobj.ChkBool(iValue);

        if(bRet == true){
            System.out.println("15th is ON");
        }
        else{
            System.out.println("15th is OFF");
        }
    }
}
