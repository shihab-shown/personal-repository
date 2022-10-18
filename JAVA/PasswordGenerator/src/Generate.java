public class Generate {
    public static final StringBuilder str = new StringBuilder();
    public static String passGen() {
        str.setLength(0);
        for (int i = 0; i < 12; i++) {
            int rand = (int) (1 + Math.random() * (4 - 1 + 1));
            switch (rand) {
                case 1 -> {
                    char lowCharacter = (char) ('a' + Math.random() * ('z' - 'a' + 1));
                    str.append(lowCharacter);
                }
                case 2 -> {
                    int number = (int) (Math.random() * 10);
                    str.append(number);
                }
                case 3 -> {
                    char specialCharacter = (char) ('!' + Math.random() * ('/' - '!' + 1));
                    str.append(specialCharacter);
                }
                case 4 -> {
                    char upCharacter = (char) ('A' + Math.random() * ('Z' - 'A' + 1));
                    str.append(upCharacter);
                }
            }
        }
        return str.toString();
    }
}
