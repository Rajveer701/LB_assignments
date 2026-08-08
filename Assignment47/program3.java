import java.util.*;
import java.io.*;

class AddFiles{
    public static void main(String args[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter directory name : ");
        String DirectoryName = sobj.nextLine();

        System.out.println("Enter file name : ");
        String fName = sobj.nextLine();

        File fobj = new File(DirectoryName);

        int iRet = 0;

        if(fobj.exists() && fobj.isDirectory()){
            File arr[] = fobj.listFiles();

            FileWriter fwobj = new FileWriter(fName);

            for(int i=0;i<arr.length;i++){
                if(arr[i].isFile()){
                    FileReader frobj = new FileReader(arr[i]);

                    char Buffer[] = new char[1024];

                    while((iRet = frobj.read(Buffer)) != -1){
                        fwobj.write(Buffer,0,iRet);
                    }
                    frobj.close();
                }
            }
            fwobj.close();
            System.out.println("File created successfully");
        }
        else{
            System.out.println("Directory does not exist.");
        }
        sobj.close();
    }
}