module lamaunina.lamaslicer {
    requires javafx.controls;
    requires javafx.fxml;
    requires javafx.web;

    requires org.controlsfx.controls;
    requires com.dlsc.formsfx;
    requires validatorfx;
    requires org.kordamp.ikonli.javafx;
    requires eu.hansolo.tilesfx;

    opens lamaunina.lamaslicer to javafx.fxml;
    exports lamaunina.lamaslicer;
}