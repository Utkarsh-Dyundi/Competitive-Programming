package first;
import java.io.*;
import java.util.*;

public class Learnjava {

	public static void main(String[] args) {
		Writer out=new Writer(System.out);
		Reader in=new Reader(System.in);
		int n=in.nextInt();
		long a[]=new long[n];
		long b[]=new long[n];
		long s[]=new long[n];
		long v[]=new long[n];
		long u=0;
		for(int i=0;i<n;i++) {
			a[i]=in.nextLong();
			b[i]=a[i];
			u+=a[i];
			s[i]=u;
		}
		sort(a);
		u=0;
		for(int i=0;i<n;i++) {
			u+=a[i];
			v[i]=u;
		}
		int q=in.nextInt();
		while(q>0) {
			int  t=in.nextInt();
			int l=in.nextInt();
			int r=in.nextInt();
			
			if(t==1) {
				long ans=s[r-1]-s[l-1];
				ans+=b[l-1];
				System.out.println(ans);
			}
			else {
				long ans=v[r-1]-v[l-1];
				ans+=a[l-1];
				System.out.println(ans);
			}
			
			q--;
		}
	}
    static class Reader{
		
		BufferedReader br;
		StringTokenizer to;
		
		Reader(InputStream stream){
			br=new BufferedReader(new InputStreamReader(stream));
			to=new StringTokenizer("");
		}
		
		String next() {
			while(!to.hasMoreTokens()) {
				try {
					to=new StringTokenizer(br.readLine());	
				}catch(IOException e) {}
				
			}
			return to.nextToken();
			
		}
		
		int nextInt() {
			return Integer.parseInt(next());
		}
		
		long nextLong() {
			return Long.parseLong(next());
		}
		
		int [] readArray(int n) {
			int a[]=new int[n];
			for(int i=0; i<n ;i++) a[i]=nextInt();
			return a;
		}
		long [] readLongArray(int n) {
			long a[]=new long[n];
			for(int i=0; i<n ;i++) a[i]=nextLong();
			return a;
		}
		
	}
	
	static class Writer extends PrintWriter{
		Writer(OutputStream stream){
			super(stream);
		}
		void println(int [] array) {
			for(int i=0; i<array.length; i++) {
				print(array[i]+" ");
			}
			println();
		}
		void println(long [] array) {
			for(int i=0; i<array.length; i++) {
				print(array[i]+" ");
			}
			println();
		}
	}
	static void sort(long[] a) {
		ArrayList<Long> list=new ArrayList<>();
		for (long i:a) list.add(i);
		Collections.sort(list);
		for (int i=0; i<a.length; i++) a[i]=list.get(i);
	}


}
