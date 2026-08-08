import java.io.*;
import java.util.*;

class AppendFile{ 
    public static void main(String A[]) throws Exception
    {   
        Scanner sobj = new Scanner(System.in);

        String Fname = null;
        System.out.println("Enter file name : ");
        Fname = sobj.nextLine();

        File fobj = new File(Fname);

        if(fobj.exists()){
            FileWriter fwobj = new FileWriter(Fname, true);

            System.out.print("Enter data to append: ");
            String data = sobj.nextLine();

            fwobj.write(data);

            fwobj.close();

            System.out.println("Data appended successfully.");
        }
        else{
            System.out.println("File does not exist.");
        }
        sobj.close();
    }
}
