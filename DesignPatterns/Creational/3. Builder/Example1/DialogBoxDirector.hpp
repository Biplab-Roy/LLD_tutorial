#pragma once
#include "DialogBox.hpp"
#include "DialogBoxBuilder.hpp"

class DialogBoxDirector {
    public:
    static DialogBox* createErrorDialog(std::string msg) {
        return DialogBoxBuilder()
                .addTitle("Error")
                ->addMessage(msg)
                ->addOkButton()
                ->build();
    }
    static DialogBox* createConfirmationDialog(std::string msg) {
        return DialogBoxBuilder()
                .addTitle("Confirm")
                ->addMessage(msg)
                ->addOkButton()
                ->addCancleButton()
                ->addExitButton()
                ->build();
    }
};