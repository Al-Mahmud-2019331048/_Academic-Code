package chapter3;

public class Arrays {
	public static void main(String args[]) {
		int arr[]=new int[10];
		arr[0]=4;
		arr[1]=6;
		arr[2]=23;
		
		//auto array
		int month_days[]= {31,28,31,30,31,30,31,31,30,31,30,31};
		System.out.println("March has "+month_days[2]+" days");
		
		//2d array
		int x[][]=new int[4][5];
		for(int i=0;i<4;i++) {
			for(int j=0;j<5;j++)
				x[i][j]=i+j;
		}
		
		//printing
		for(int i=0;i<4;i++) {
			for(int j=0;j<5;j++)
				System.out.print(x[i][j]+" ");
			System.out.println();
		}
		System.out.println();
		
		//specify leftmost dimension, allocate remaining dimension
		int z[][]=new int[4][];
		z[0]=new int[2];
		z[1]=new int[5];
		z[2]=new int[4];
		z[3]=new int[6];
		
		for(int i=0;i<4;i++) {
			for(int j=0;j<z[i].length;j++) {
				z[i][j]=i+j;
			}
		}
		
		//printing
		for(int i=0;i<4;i++) {
			for(int j=0;j<z[i].length;j++) {
				System.out.print(z[i][j]+" ");
			}
			System.out.println();
		}
		System.out.println();
		
		//auto 2d array
		double m[][]= {{1.3,2.1,3.6},{2,3.5,4,5.2},{4.3,5.0,6,7.2,8},{1.3,2,3.2,4}};
		for(int i=0;i<m.length;i++) {
			for(int j=0;j<m[i].length;j++) {
				System.out.print(m[i][j]+" ");
			}
			System.out.println();
		}
		System.out.println();
		
		//3d array
		int p[][][]=new int[2][3][4];
		System.out.println(p.length + " " + p[1].length + " " + p[1][2].length);
		
		}
}
