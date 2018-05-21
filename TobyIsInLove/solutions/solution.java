import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;


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
	
	public static void main(String args[]) throws NumberFormatException, IOException {
		Scanner sc = new Scanner();
		int n = sc.nextInt();
		
		for(int i = 0; i < n; i++) {
			String s = sc.next();
      int ind = 0;
      int cnt = 0;
      while (ind != -1) {
        ind = s.indexOf("love", ind);
        if (ind != -1) cnt ++;
      }

      System.out.println(cnt);
		}
	}
}
