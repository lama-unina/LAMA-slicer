package lamaunina.lamaslicer;

import javafx.application.Application;
import javafx.fxml.FXMLLoader;
import javafx.scene.Scene;
import javafx.scene.image.Image;
import javafx.scene.layout.StackPane;
import javafx.stage.Stage;

import java.io.IOException;

public class LAMAslicer extends Application {
    @Override
    public void start(Stage stage) throws IOException {
        FXMLLoader fxmlLoader = new FXMLLoader(LAMAslicer.class.getResource("slicer-view.fxml"));
        Scene scene = new Scene(fxmlLoader.load(), 960, 720);
        //stage.getIcons().add(new Image(LAMAslicer.class.getResourceAsStream("lama_slicer_0.0.4.png")));
        stage.setTitle("LAMA-slicer");
        stage.setScene(scene);
        stage.show();
    }

    public static void main(String[] args) {
        launch();
    }
}