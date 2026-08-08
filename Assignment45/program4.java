import java.io.*;
import java.util.*;

class CreateNewFile{ 
    public static void main(String A[]) 
    {   
        Scanner sobj = new Scanner(System.in);

        String Fname = null;
        System.out.println("Enter file name : ");
        Fname = sobj.nextLine();

        File fobj = null;
        boolean bRet = false;

        try{
            fobj = new File(Fname);

            bRet = fobj.exists();
            
            if(bRet == true){
                System.out.println("File already exists");
            }
            else{
                fobj.createNewFile();
                System.out.println("File gets successfully created");
            }       
        }
        catch(IOException iobj){
            System.out.println(iobj);
        }
        catch(Exception eobj){
            System.out.println(eobj);
        }  
    }
}
