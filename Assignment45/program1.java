import java.io.File;
import java.util.*;

class OpenFile{
    public static void main(String args[]){
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter file name : ");
        String Filename = sobj.nextLine();

        File fobj = new File(Filename);
        
        if(fobj.exists()){
            System.out.println("File opened successfully.");
        }
        else{
            System.out.println("File does not exist.");
        }

        sobj.close();

    }
}