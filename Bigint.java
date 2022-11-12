import java.math.BigInteger;
public class Bigint{
  public static void main(String[] args) {
    BigInteger a = new BigInteger("79481241");
    BigInteger b = new BigInteger("78934205");
    BigInteger c = a.add(b);
    System.out.println(c);
  }
}
