import java.io.*;
import java.util.*;

class CheckRegularFile{
    public static void main (String args[]){
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter file name to check if regular : ");
        String Fname = sobj.nextLine();

        File fobj = new File(Fname);

        if(fobj.exists()){
            if(fobj.isFile()){
                System.out.println("It is a regular file.");
            }
            else{
                System.out.println("It is not a regular file.");
            }
        }
        else{
            System.out.println("File does not exist.");
        }
        sobj.close();
    }
}