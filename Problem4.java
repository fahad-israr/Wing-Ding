import java.io.*;
import java.util.*; 
public class Main
{
	public static void main(String[] args)throws IOException
	{ 
	    BufferedReader obj=new BufferedReader(new InputStreamReader(System.in));
	    String s=obj.readLine();
	    s=s.trim();
	      StringTokenizer st1 = 
             new StringTokenizer(s, "_"); 
             if(st1.hasMoreTokens())System.out.print(st1.nextToken());
             while (st1.hasMoreTokens()) {
                 String tmp=st1.nextToken();
                 
                 System.out.print(tmp.substring(0,1).toUpperCase() + tmp.substring(1).toLowerCase());
             }
            
		
	}
}
