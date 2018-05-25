import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;
import java.util.ArrayList;
import java.util.Arrays;


public class solution {

  static class Scanner{
    BufferedReader br=null;
    StringTokenizer tk=null;
    public Scanner(){
      br=new BufferedReader(new InputStreamReader(System.in));
    }
    public String next() throws IOException{
      while(tk==null || !tk.hasMoreTokens()) {
        String cad = br.readLine();
        if (cad == null)
          return null;
        tk=new StringTokenizer(cad);
      }
      return tk.nextToken();
    }
    public int nextInt() throws NumberFormatException, IOException{
      return Integer.valueOf(next());
    }
    public long nextLong() throws NumberFormatException, IOException{
      return Long.valueOf(next());
    }
    public double nextDouble() throws NumberFormatException, IOException{
      return Double.valueOf(next());
    }
  }

  static int count(long x) {
    long p = 1;
    int c = 0;
  	for (int i = 0; i < 63; ++i) {
      if ((x & p) != 0) c ++;
      p *= 2;
    }

    return c;
  }
    
  public static void main(String args[]) throws NumberFormatException, IOException {
    Scanner sc = new Scanner();
    int T = sc.nextInt();

    for(int i = 0; i < T; i++) {
      long a = sc.nextLong();
      long b = sc.nextLong();
      System.out.println(count(a) + count(b));
    }
  }
}
