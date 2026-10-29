#include "aiws/gui/main_window.hpp"

#include <QApplication>
#include <QMessageBox>

// DONE: Defined the ExitCallback function used to confirm an Exit request.
void confirm_exit(QWidget* parent) {
    auto answer = QMessageBox::question( parent, "Exit","Exit the application?",QMessageBox::Yes | QMessageBox::No,
      QMessageBox::No);
     if (answer == QMessageBox::Yes) { QApplication::quit(); } } 

int main(int argc, char* argv[]) {
    // TODO: Created the QApplication, constructed/configured the MainWindow,
    // registered the ExitCallback, shown the window, and ran the event loop.
    QApplication app(argc, argv);
    aiws::gui::MainWindow window;
    window.set_exit_callback(confirm_exit); //EXIT1 1 // address of confirm_exit function is passed to MainWindow::set_exit_callback()
    window.show();
    return app.exec(); }
