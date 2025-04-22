#pragma once

#include "DialogBox.hpp"

class DialogBoxBuilder {
    private:
    DialogBox* dialogBox;

    public:
    DialogBoxBuilder() {
        dialogBox = new DialogBox();
    }
    ~DialogBoxBuilder() {
        delete dialogBox;
    }
    DialogBoxBuilder* addTitle(std::string title) {
        dialogBox->title = title;
    }
    DialogBoxBuilder* addMessage(std::string message) {
        dialogBox->message = message;
    }
    DialogBoxBuilder* addBackgroudColor(std::string backgroudColor) {
        dialogBox->backgroundColor = backgroudColor;
    }
    DialogBoxBuilder* addOkButtonColor(std::string okButtonColor) {
        dialogBox->okButtonColor = okButtonColor;
    }
    DialogBoxBuilder* addCancleButtonColor(std::string cancleButtonColor) {
        dialogBox->cancleButtonColor = cancleButtonColor;
    }
    DialogBoxBuilder* addExitButtonColor(std::string exitButtonColor) {
        dialogBox->exitButtonColor = exitButtonColor;
    }
    DialogBoxBuilder* addOkButton() {
        dialogBox->hasOkButton = true;
    }
    DialogBoxBuilder* addCancleButton() {
        dialogBox->hasCancleButton = true;
    }
    DialogBoxBuilder* addExitButton() {
        dialogBox->hasExitButton = true;
    }
    DialogBoxBuilder* removeOkButton() {
        dialogBox->hasOkButton = false;
    }
    DialogBoxBuilder* removeCancleButton() {
        dialogBox->hasCancleButton = false;
    }
    DialogBoxBuilder* removeExitButton() {
        dialogBox->hasExitButton = false;
    }
};