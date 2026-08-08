import java.io.*;
import java.util.*;

class CreateDirectory{
    public static void main (String args[]){
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter directory name : ");
        String Fname = sobj.nextLine();

        File fobj = new File(Fname);

       
        if(fobj.mkdirs()){
            System.out.println("Directory created successfully.");
        }
        else{
            System.out.println("Unable to create directory.");
        }
        
        sobj.close();
    }
}