import java.io.*;
import java.nio.charset.StandardCharsets;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.List;

public class Main {
    public static void main(String[] args) throws IOException {
//        System.out.println("Hello world!");
        FileWriter fileWriter = new FileWriter("new.txt",true);
        BufferedWriter bufferedWriter = new BufferedWriter(fileWriter);
        bufferedWriter.write("Hello Motherfucker !!!!!!!\n");
        bufferedWriter.write("Hello Montana!!!!");
        bufferedWriter.close();
        /*
         /File file = new File("new.txt");
         file.createNewFile();
         FileReader fileReader = new FileReader(file);
         fileReader.close();
        */
        Path path = Paths.get("new.txt");
        List<String> line = Files.readAllLines(path, StandardCharsets.UTF_8);
        line.set(1,"Hello World");
        Files.write(path,line,StandardCharsets.UTF_8);

    }
}