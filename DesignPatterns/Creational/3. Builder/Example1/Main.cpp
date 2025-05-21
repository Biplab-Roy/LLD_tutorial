#include "DialogBoxDirector.hpp"
#include "DialogBox.hpp"

int main() {
    DialogBox* dialogBox = DialogBoxDirector::createErrorDialog("Something went wrong!");
    dialogBox->showDialogBox();
}