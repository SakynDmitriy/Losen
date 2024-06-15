#include "Losen.h"
//Button of answer section
void Losen::ClickBtnClrAnswer() {
	ui.BtnClrAnsw->setDisabled(true);

	QLayoutItem* item;
	while ((item = ui.layOutAnsw->takeAt(0))) delete item->widget();
}

