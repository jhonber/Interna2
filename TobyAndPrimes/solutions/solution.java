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

  static ArrayList<Integer> gen_primes(int MX) {
		ArrayList<Integer> primes = new ArrayList<Integer>();
    primes.add(2);
		for (int i = 3; i <= MX; i += 2) {
      int j = 2;
      boolean f = true;
      while (j * j <= i) {
        if (i % j == 0) {
          f = false;
          break;
        }
        j ++;
      }

      if (f) primes.add(i);
    }
    return primes;
  }
    
  static int[] int_to_vec(int n) {
      int[] arr = new int[10];
      Arrays.fill(arr, 0);
      
      while (n > 0) {
          arr[n % 10] ++;
          n /= 10;
      }
      
      return arr;
  }

  public static void main(String args[]) throws NumberFormatException, IOException {
    Scanner sc = new Scanner();
    int T = sc.nextInt();

    ArrayList<Integer> primes = gen_primes(10000);
    
    for(int i = 0; i < T; i++) {
      int n = sc.nextInt();
      boolean ok = false;
      int[] v = int_to_vec(n);
      
      for (int j = 0; j < primes.size(); ++j) {
          int[] cur = int_to_vec(primes.get(j));
          
          boolean f = true;
          for (int k = 0; k < 10; ++k) {
              if (cur[k] != v[k]) {
                f = false;
                break;
              }
          }
          
          if (f) {
              ok = true;
              break;
          }
      }
        
      if (ok) System.out.println("YES");
      else System.out.println("NO");
    }
  }
}
