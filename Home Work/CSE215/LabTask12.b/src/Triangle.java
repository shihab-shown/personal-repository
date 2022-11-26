public class Triangle {
    private double a;
    private double b;
    private double c;

    public Triangle(){
        this.a = 1;
        this.b = 1;
        this.c = 1;
    }
    public Triangle(double a, double b, double c) throws IllegalTriangleException {
            this.a = a;
            this.b = b;
            this.c = c;
        if ((a+b<c) || (b+c<a) ||(a+c<b)){
            throw new IllegalTriangleException("Invalid triangle");
        }
    }

    public double getA() {
        return this.a;
    }

    public double getB() {
        return this.b;
    }

    public double getC() {
        return this.c;
    }

    public void setA(double a) {
        this.a = a;
    }

    public void setB(double b) {
        this.b = b;
    }

    public void setC(double c) {
        this.c = c;
    }

    public double getArea() {
        double s= (this.a+this.b+this.c)/2;
        return Math.sqrt(s*(s- this.a)*(s- this.b)*(s- this.c));
    }
    public double getPerimeter(){
        return this.a+this.b+this.c;
    }
}
