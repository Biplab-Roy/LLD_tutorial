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
        return this;
    }
    DialogBoxBuilder* addMessage(std::string message) {
        dialogBox->message = message;
        return this;
    }
    DialogBoxBuilder* addBackgroudColor(std::string backgroudColor) {
        dialogBox->backgroundColor = backgroudColor;
        return this;
    }
    DialogBoxBuilder* addOkButtonColor(std::string okButtonColor) {
        dialogBox->okButtonColor = okButtonColor;
        return this;
    }
    DialogBoxBuilder* addCancleButtonColor(std::string cancleButtonColor) {
        dialogBox->cancleButtonColor = cancleButtonColor;
        return this;
    }
    DialogBoxBuilder* addExitButtonColor(std::string exitButtonColor) {
        dialogBox->exitButtonColor = exitButtonColor;
        return this;
    }
    DialogBoxBuilder* addOkButton() {
        dialogBox->hasOkButton = true;
        return this;
    }
    DialogBoxBuilder* addCancleButton() {
        dialogBox->hasCancleButton = true;
        return this;
    }
    DialogBoxBuilder* addExitButton() {
        dialogBox->hasExitButton = true;
        return this;
    }
    DialogBoxBuilder* removeOkButton() {
        dialogBox->hasOkButton = false;
        return this;
    }
    DialogBoxBuilder* removeCancleButton() {
        dialogBox->hasCancleButton = false;
        return this;
    }
    DialogBoxBuilder* removeExitButton() {
        dialogBox->hasExitButton = false;
        return this;
    }
    DialogBox* build() {
        return dialogBox;
    }
};