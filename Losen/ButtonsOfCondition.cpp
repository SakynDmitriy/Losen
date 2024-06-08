#include "Losen.h"
#include <QtWidgets/QGraphicsItem>
//buttons
void Losen::ClickBtnClr() {
	//Disable Enable
	ui.BtnInsert->setEnabled(true);
	ui.BtnClr->setDisabled(true);
	vect.clear();
	QLayoutItem* item;
	while ((item = ui.layOut->takeAt(0))) delete item->widget();
}

void Losen::ClickBtnInsert() {
	//Disable Enable
	ui.BtnInsert->setDisabled(true);
	ui.BtnClr->setEnabled(true);
	ui.BtnGrphClr->setEnabled(true);
	ui.BtnDrawGrph->setEnabled(true);

	if (ui.CntEquations->value() != 0)
	{
		QFont tempFont = QFont();
		tempFont.setPointSizeF(8);
		ui.layOut->setMargin(1);
		vect = QVector<stroka>(ui.CntEquations->value() + 1);

		for (int i = 0; i < ui.CntEquations->value() + 1; ++i) {
			QWidget * temp = new QWidget();
			QHBoxLayout * temp2 = new QHBoxLayout();
			QLabel* colorW = new QLabel(QString::number(i));
			colorW->setFont(tempFont);
			colorW->setAlignment(Qt::AlignCenter);
			temp->setLayout(temp2);
            temp2->addWidget(vect[i].TextEdit1);
            temp2->addWidget(vect[i].TextEdit2);
			temp->layout()->setMargin(0);
            temp->setMaximumHeight(30);
			temp->setMaximumWidth(200);
			if (i == 0) ui.funcLayout->addWidget(temp);
			else {
				colorW->setAutoFillBackground(true);
				colorW->setMinimumWidth(20);
				colorW->setPalette(*vect[i].draw_color);
                temp2->addWidget(vect[i].TextEdit3);
				temp2->addWidget(colorW);
				ui.layOut->addWidget(temp);
			}
		}
		ui.scrollAreaWidgetContents->setLayout(ui.layOut);
	}
}
