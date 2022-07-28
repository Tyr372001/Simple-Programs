// A Simple Java Program to Implement Complex Nmumber and its basic opertations
public class Complex{
	// Defining two integers as real and imag
	private int real;	// real store real part of the complex number
	private int imag;	// imag store imaginary part of the complex number

	Complex()		// using default constructor to initialise the data
	{real=0; imag=0;}

	Complex(int real, int imag)		// using parameterised constructor to pass arguments 
	{this.real=real; this.imag=imag;}	// using this keyword to hide my instance variable and the local variable as they have the same name

	public Complex add(Complex c){		// add() method to add two complex number

		Complex res = new Complex();

		res.real=real+c.real;
		res.imag=imag+c.imag;

		return res;
	}

	public Complex subtract(Complex c){	//	subtract() method to subtract two complex numbers

		Complex res = new Complex();

		res.real=real-c.real;
		res.imag=imag-c.imag;

		return res;
	}

	public Complex multiply(Complex c){	// multiply() to multiply the complex numbers 

		Complex res = new Complex();

		res.real=real*c.real;
		res.imag=imag*c.imag;

		return res;
	}

	public String toString()		// overriding the toString() method to print complex numbers by using print() or println()
	{
		return(real + " + "+ imag+"i");
	}
	// the main() method 
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
