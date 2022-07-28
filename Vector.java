public class Vector{

	private double i;
	private double j;
	private double k;

	Vector(double i, double j, double k){
		this.i=i;
		this.j=j;
		this.k=k;
	}
	Vector(){
		i=0.0;
		j=0.0;
		k=0.0;
	}

	public Vector add(Vector vector){

		Vector res = new Vector();
		res.i=i+vector.i;
		res.j=j+vector.j;
		res.k=k+vector.k;
		return res;
	}

	public Vector subtract(Vector vector){
		Vector res = new Vector();
		res.i=i-vector.i;
		res.j=j-vector.j;
		res.k=k-vector.k;
		return res;
	}

	public String toString()
	{
		return (i+"i+"+j+"j+"+k+"k");
	}

	public static void main(String[] args) {
		Vector A = new Vector(5,6,7);
		Vector B = new Vector(6,8,1);

		System.out.println(A.add(B));
	}
}