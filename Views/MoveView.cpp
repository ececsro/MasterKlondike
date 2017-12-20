#include "MoveView.h"

MoveView::MoveView() {

}

MoveView::~MoveView() {
	// TODO Auto-generated destructor stub
}

MoveView::MoveView(OldMoveController* moveController) {
	ioConsole->putConsole("Enter Name and Suit of the card you want to move:");
	ioConsole->putConsole(" Examples: 5 Diamonds, Ace Clubs , 3 Hearts or Jack Spades");
	AllowedDialog dialog;
	string cardName=dialog.getCardName(ioConsole);

	ioConsole->putConsole(" Given card Name: " + cardName);

	ioConsole->putConsole("Enter place to move: ");
	ioConsole->putConsole(" To Tableu:      1 2 3 4 5 6 7");
	ioConsole->putConsole(" To Foundations: (D)iamonds (C)lubs (H)earts (S)pades");

    string placeToMove=dialog.getPlaceToMove(ioConsole);

    ioConsole->putConsole(" LUIS ---- VERSION NO COMPLETADA. ME FALTA MOVER DE VERDAD. ");
    ioConsole->putConsole("           CHEQUEO SI EL MOVIMIENTO ES PERMITIDO, PERO SOLO ESO");
    ioConsole->putConsole(" PRINCIPIO DE ESTADOS INTERMEDIOS ESTABLES , METODOLOGIAS ITERACTIVAS ;-)");

	if (!moveController->moveCard(cardName, placeToMove)){
		ioConsole->putConsole("Card movement not allowed");
	}
	else{
		ioConsole->putConsole("Card movement is allowed");
	};
}
