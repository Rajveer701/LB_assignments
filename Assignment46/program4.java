import java.io.*;
import java.util.*;
import java.util.zip.CRC32;
import java.util.zip.CheckedInputStream;

class CheckSum{
    public static void main(String args[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter file name: ");
        String name = sobj.nextLine();

        File fobj = new File(name);

        if(fobj.exists()){
            CheckedInputStream cobj = new CheckedInputStream(new FileInputStream(name), new CRC32());

            while(cobj.read() != -1)
            {
                
            }

            System.out.println("Checksum : " + cobj.getChecksum().getValue());

            cobj.close();
        }
        else{
            System.out.println("File does not exist");   
        }
        sobj.close();
    }
}