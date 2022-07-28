public class Complex{

	private int real;
	private int imag;

	Complex()
	{real=0; imag=0;}

	Complex(int real, int imag)
	{this.real=real; this.imag=imag;}

	public Complex add(Complex c){

		Complex res = new Complex();

		res.real=real+c.real;
		res.imag=imag+c.imag;

		return res;
	}

	public Complex subtract(Complex c){

		Complex res = new Complex();

		res.real=real-c.real;
		res.imag=imag-c.imag;

		return res;
	}

	public Complex multiply(Complex c){

		Complex res = new Complex();

		res.real=real*c.real;
		res.imag=imag*c.imag;

		return res;
	}

	public String toString()
	{
		return(real + " + "+ imag+"i");
	}

	public static void main(String[] args) {
		
		Complex c1 = new Complex(5,4);
		Complex c2 = new Complex(6,8);

		Complex c3 = c1.add(c2);
		Complex c4 = c1.subtract(c2);
		Complex c5 = c3.multiply(c4);

		System.out.println(c3);
		System.out.println(c4);
		System.out.println(c5);
	}

}