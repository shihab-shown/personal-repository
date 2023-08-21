public class Generator {
    public static final StringBuilder str = new StringBuilder();

    public Generator() {
    }

    public static String passGen() {
        str.setLength(0);

        for(int i = 0; i < 12; ++i) {
            int rand = (int)(1.0 + Math.random() * 4.0);
            int upCharacter;
            switch (rand) {
                case 1 -> {
                    char lowCharacter = (char) ((int) (97.0 + Math.random() * 26.0));
                    str.append(lowCharacter);
                }
                case 2 -> {
                    upCharacter = (int) (Math.random() * 10.0);
                    str.append(upCharacter);
                }
                case 3 -> {
                    upCharacter = (char) ((int) (33.0 + Math.random() * 15.0));
                    str.append((char) upCharacter);
                }
                case 4 -> {
                    upCharacter = (char) ((int) (65.0 + Math.random() * 26.0));
                    str.append((char) upCharacter);
                }
            }
        }

        return str.toString();
    }
}

