public class Main {
    public static void main(String[] args) throws Exception {
        Point point1 = new Point(2,5);
        Point point2 = new Point(4,9);
        double a = point1.distance(point1);
        System.out.println(a);
        System.out.println(point1);
        System.out.println(point2);
        System.out.println("Distance: "+point1.distance(point2));
        Line line = new Line(point1, point2);
        System.out.println("Line: "+line.length());
    }
}
