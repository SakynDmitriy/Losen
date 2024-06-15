#include "Losen.h"
#include <QLabel>
#include <QLayout>
#include <QVector>

Losen::Losen(QWidget *parent) : QMainWindow(parent) {  
  
	ui.layOut = new QVBoxLayout();	
	
  myScene = new QGraphicsScene(this);
  ui.setupUi(this);

  //Disable Enable//
  ui.BtnGrphClr->setDisabled(true);
  ui.BtnDrawGrph->setDisabled(true);
  ui.BtnClr->setDisabled(true);
  ui.BtnClrAnsw->setDisabled(true);
  //
  ui.graphicsView->setScene(myScene);
  ui.graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
  ui.graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

  //connect section
  connect(ui.BtnClr,	  &QPushButton::clicked, this, &Losen::ClickBtnClr);
  connect(ui.BtnInsert,   &QPushButton::clicked, this, &Losen::ClickBtnInsert);
  connect(ui.BtnGrphClr,  &QPushButton::clicked, this, &Losen::ClickBtnGrphClr);
  connect(ui.BtnDrawGrph, &QPushButton::clicked, this, &Losen::ClickBtnDrawGrph);
  connect(ui.BtnClrAnsw,  &QPushButton::clicked, this, &Losen::ClickBtnClrAnswer);
}
Losen::~Losen(){}




