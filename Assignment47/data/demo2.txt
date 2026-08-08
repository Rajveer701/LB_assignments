import java.io.*;
import java.util.*;

class DisplayRegularFiles{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        String FolderName = null;

        System.out.println("Enter folder name : ");
        FolderName = sobj.nextLine();

        File fobj = new File(FolderName);

        if((fobj.exists()) && (fobj.isDirectory())){
            File arr[] = fobj.listFiles();

            for(int i=0;i<arr.length;i++){
                if(arr[i].isFile()){
                    System.out.println(arr[i].getName());
                }
            }
        }
        else{
            System.out.println("There is no such directory");
        }
        sobj.close();
    }
}
