package lamaunina.lamaslicer;

import javafx.fxml.FXML;
import javafx.scene.control.Label;

public class LAMAslicerController {
    @FXML
    private Label welcomeText;

    @FXML
    protected void onHelloButtonClick() {
        welcomeText.setText("Welcome to JavaFX Application!");
    }
}