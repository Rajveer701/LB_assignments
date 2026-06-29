import java.util.*;

class Logic{
    public boolean ChkBool(long iNo,int iPos){
        long iMask = 0x1;
        long iAns = 0;

        iMask = iMask << (iPos-1);

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
        int iPos = 0;
        boolean bRet = false;

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        System.out.println("Enter position : ");
        iPos = sobj.nextInt();

        Logic lobj = new Logic();

        bRet = lobj.ChkBool(iValue,iPos);

        if(bRet == true){
            System.out.println("Bit is ON");
        }
        else{
            System.out.println("Bit is OFF");
        }
    }
}
