import java.io.*;
import java.util.StringTokenizer;

public class Template {

    public static void main(String []args) throws IOException {
        Scanner in = new Scanner(System.in);
        OutputWriter out = new OutputWriter(System.out);
        Task solver = new Task();
        solver.solve(in, out);
        out.close();
    }

}

class Task{
    public void solve(Scanner in, OutputWriter out)  throws IOException {
        int t = in.nextInt();
        while (t-- > 0) {
            int n = in.nextInt();
            int []data = new int[n];
            for (int i = 0; i < n; i++)
                data[i] = in.nextInt();
            while (n > 1) {
                int id_max = 0;
                for (int i = 0; i < n; i++) {
                    if (data[i] > data[id_max])
                        id_max = i;
                }
                int id_second = id_max == 0 ? 1 : 0;
                for (int i = 0; i < n; i++) {
                    if (data[i] > data[id_second] && i != id_max) {
                        id_second = i;
                    }
                }
                if (data[id_second] == data[id_max]) {
                    data[id_second] = data[n - 1];
                    n--;
                } else {
                    data[id_max] -= data[id_second];
                }
            }
            out.print(data[0] + "\n");
        }
    }
}

class Scanner{
    public BufferedReader reader;
    public StringTokenizer st;

    public Scanner(InputStream stream){
        reader = new BufferedReader(new InputStreamReader(stream));
        st = null;
    }

    public String next(){
        while(st == null || !st.hasMoreTokens()){
            try{
                String line  = reader.readLine();
                if(line == null) return null;
                st =  new StringTokenizer(line);
            }catch (Exception e){
                throw (new RuntimeException());
            }
        }
        return st.nextToken();
    }

    public int nextInt(){
        return Integer.parseInt(next());
    }
    public long nextLong(){
        return Long.parseLong(next());
    }
    public double nextDouble(){
        return Double.parseDouble(next());
    }
}

class OutputWriter{
    BufferedWriter writer;

    public OutputWriter(OutputStream stream){
        writer = new BufferedWriter(new OutputStreamWriter(stream));
    }

    public void print(int i) throws IOException {
        writer.write(i);
    }

    public void print(String s) throws IOException {
        writer.write(s);
    }

    public void print(char []c) throws IOException {
        writer.write(c);
    }
    public  void close() throws IOException {
        writer.close();
    }
}
