package chapter7;

public class Argument_passing {
	int a,b;
	
	Argument_passing(){
		
	}
	
	Argument_passing(int x,int y){
		a=x;
		b=y;
	}
	
	
	void change(int i,int j) {
		i*=2;
		j/=2;
	}
	
	void change(Argument_passing ob) {
		ob.a *= 2;
		ob.b /= 2;
	}
}
