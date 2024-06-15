/********************************************************************************
** Form generated from reading UI file 'Losen.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOSEN_H
#define UI_LOSEN_H

#include <GraphicsView.h>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LosenClass
{
public:
    QWidget *centralWidget;
    GraphicsView *graphicsView;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *layOut;
    QWidget *gridWidget;
    QGridLayout *gridLayout;
    QSpinBox *CntEquations;
    QPushButton *BtnGrphClr;
    QVBoxLayout *verticalLayout;
    QPushButton *BtnClr;
    QPushButton *BtnInsert;
    QPushButton *BtnDrawGrph;
    QFrame *line;
    QLabel *label;
    QLabel *label_2;
    QWidget *widget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *funcLayout;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QFrame *line_2;
    QLabel *label_4;
    QFrame *line_3;
    QFrame *line_4;
    QFrame *line_5;
    QScrollArea *scrollAreaAnswer;
    QWidget *scrollAreaWidgetContents_2;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *layOutAnsw;
    QFrame *frame;
    QPushButton *BtnClrAnsw;
    QFrame *line_6;

    void setupUi(QMainWindow *LosenClass)
    {
        if (LosenClass->objectName().isEmpty())
            LosenClass->setObjectName(QString::fromUtf8("LosenClass"));
        LosenClass->resize(741, 571);
        QPalette palette;
        QBrush brush(QColor(190, 219, 250, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        QBrush brush1(QColor(51, 153, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        QBrush brush3(QColor(255, 255, 255, 128));
        brush3.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        QBrush brush4(QColor(240, 240, 240, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        QBrush brush5(QColor(0, 0, 0, 128));
        brush5.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        LosenClass->setPalette(palette);
        LosenClass->setAutoFillBackground(true);
        LosenClass->setTabShape(QTabWidget::Triangular);
        centralWidget = new QWidget(LosenClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        QPalette palette1;
        centralWidget->setPalette(palette1);
        centralWidget->setAutoFillBackground(true);
        graphicsView = new GraphicsView(centralWidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(0, 10, 500, 441));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(graphicsView->sizePolicy().hasHeightForWidth());
        graphicsView->setSizePolicy(sizePolicy);
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(510, 190, 231, 131));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        scrollArea->setPalette(palette2);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 229, 129));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        scrollAreaWidgetContents->setPalette(palette3);
        verticalLayoutWidget = new QWidget(scrollAreaWidgetContents);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 231, 131));
        layOut = new QVBoxLayout(verticalLayoutWidget);
        layOut->setSpacing(6);
        layOut->setContentsMargins(11, 11, 11, 11);
        layOut->setObjectName(QString::fromUtf8("layOut"));
        layOut->setContentsMargins(0, 0, 0, 0);
        scrollArea->setWidget(scrollAreaWidgetContents);
        gridWidget = new QWidget(centralWidget);
        gridWidget->setObjectName(QString::fromUtf8("gridWidget"));
        gridWidget->setGeometry(QRect(510, 10, 231, 101));
        QPalette palette4;
        gridWidget->setPalette(palette4);
        gridWidget->setAutoFillBackground(true);
        gridLayout = new QGridLayout(gridWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        CntEquations = new QSpinBox(gridWidget);
        CntEquations->setObjectName(QString::fromUtf8("CntEquations"));

        gridLayout->addWidget(CntEquations, 0, 0, 1, 1);

        BtnGrphClr = new QPushButton(gridWidget);
        BtnGrphClr->setObjectName(QString::fromUtf8("BtnGrphClr"));
        QFont font;
        font.setPointSize(8);
        BtnGrphClr->setFont(font);

        gridLayout->addWidget(BtnGrphClr, 2, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        BtnClr = new QPushButton(gridWidget);
        BtnClr->setObjectName(QString::fromUtf8("BtnClr"));
        BtnClr->setFont(font);

        verticalLayout->addWidget(BtnClr);

        BtnInsert = new QPushButton(gridWidget);
        BtnInsert->setObjectName(QString::fromUtf8("BtnInsert"));
        BtnInsert->setFont(font);

        verticalLayout->addWidget(BtnInsert);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);

        BtnDrawGrph = new QPushButton(gridWidget);
        BtnDrawGrph->setObjectName(QString::fromUtf8("BtnDrawGrph"));
        BtnDrawGrph->setFont(font);

        gridLayout->addWidget(BtnDrawGrph, 2, 0, 1, 1);

        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(490, 0, 31, 561));
        QPalette palette5;
        QBrush brush6(QColor(51, 51, 55, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        line->setPalette(palette5);
        line->setAutoFillBackground(false);
        line->setFrameShadow(QFrame::Plain);
        line->setLineWidth(10);
        line->setMidLineWidth(3);
        line->setFrameShape(QFrame::VLine);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(270, 450, 231, 111));
        QPalette palette6;
        QBrush brush7(QColor(89, 89, 91, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        label->setPalette(palette6);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAutoFillBackground(true);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(0, 450, 231, 111));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette7.setBrush(QPalette::Active, QPalette::Shadow, brush7);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush7);
        palette7.setBrush(QPalette::Inactive, QPalette::Shadow, brush7);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        palette7.setBrush(QPalette::Disabled, QPalette::Shadow, brush7);
        label_2->setPalette(palette7);
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setAutoFillBackground(true);
        label_2->setAlignment(Qt::AlignCenter);
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(510, 120, 230, 31));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        widget->setPalette(palette8);
        widget->setAutoFillBackground(true);
        horizontalLayoutWidget = new QWidget(widget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 0, 221, 31));
        funcLayout = new QHBoxLayout(horizontalLayoutWidget);
        funcLayout->setSpacing(6);
        funcLayout->setContentsMargins(11, 11, 11, 11);
        funcLayout->setObjectName(QString::fromUtf8("funcLayout"));
        funcLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(30, 0));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        label_3->setPalette(palette9);
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        label_3->setFont(font1);
        label_3->setAutoFillBackground(true);

        funcLayout->addWidget(label_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        funcLayout->addItem(horizontalSpacer);

        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(0, -10, 741, 31));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        line_2->setPalette(palette10);
        line_2->setAutoFillBackground(false);
        line_2->setFrameShadow(QFrame::Plain);
        line_2->setLineWidth(10);
        line_2->setMidLineWidth(3);
        line_2->setFrameShape(QFrame::HLine);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(510, 170, 231, 21));
        label_4->setMinimumSize(QSize(30, 0));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette11.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette11.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        label_4->setPalette(palette11);
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        label_4->setFont(font2);
        label_4->setAutoFillBackground(true);
        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(510, 180, 231, 21));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette12.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette12.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        line_3->setPalette(palette12);
        line_3->setAutoFillBackground(false);
        line_3->setFrameShadow(QFrame::Plain);
        line_3->setLineWidth(5);
        line_3->setMidLineWidth(1);
        line_3->setFrameShape(QFrame::HLine);
        line_4 = new QFrame(centralWidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(560, 170, 16, 151));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette13.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette13.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        line_4->setPalette(palette13);
        line_4->setAutoFillBackground(false);
        line_4->setFrameShadow(QFrame::Plain);
        line_4->setLineWidth(5);
        line_4->setMidLineWidth(1);
        line_4->setFrameShape(QFrame::VLine);
        line_5 = new QFrame(centralWidget);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(620, 170, 16, 151));
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette14.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette14.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        line_5->setPalette(palette14);
        line_5->setAutoFillBackground(false);
        line_5->setFrameShadow(QFrame::Plain);
        line_5->setLineWidth(5);
        line_5->setMidLineWidth(1);
        line_5->setFrameShape(QFrame::VLine);
        scrollAreaAnswer = new QScrollArea(centralWidget);
        scrollAreaAnswer->setObjectName(QString::fromUtf8("scrollAreaAnswer"));
        scrollAreaAnswer->setGeometry(QRect(510, 360, 231, 201));
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette15.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette15.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        scrollAreaAnswer->setPalette(palette15);
        scrollAreaAnswer->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 229, 199));
        verticalLayoutWidget_2 = new QWidget(scrollAreaWidgetContents_2);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(10, 10, 221, 181));
        layOutAnsw = new QVBoxLayout(verticalLayoutWidget_2);
        layOutAnsw->setSpacing(0);
        layOutAnsw->setContentsMargins(11, 11, 11, 11);
        layOutAnsw->setObjectName(QString::fromUtf8("layOutAnsw"));
        layOutAnsw->setSizeConstraint(QLayout::SetFixedSize);
        layOutAnsw->setContentsMargins(0, 0, 0, 0);
        scrollAreaAnswer->setWidget(scrollAreaWidgetContents_2);
        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(510, 340, 231, 20));
        QPalette palette16;
        palette16.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette16.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette16.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        frame->setPalette(palette16);
        frame->setAutoFillBackground(true);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        BtnClrAnsw = new QPushButton(frame);
        BtnClrAnsw->setObjectName(QString::fromUtf8("BtnClrAnsw"));
        BtnClrAnsw->setGeometry(QRect(0, 0, 103, 21));
        line_6 = new QFrame(centralWidget);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setGeometry(QRect(0, 550, 741, 31));
        QPalette palette17;
        palette17.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette17.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette17.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        line_6->setPalette(palette17);
        line_6->setAutoFillBackground(false);
        line_6->setFrameShadow(QFrame::Plain);
        line_6->setLineWidth(10);
        line_6->setMidLineWidth(3);
        line_6->setFrameShape(QFrame::HLine);
        LosenClass->setCentralWidget(centralWidget);

        retranslateUi(LosenClass);

        QMetaObject::connectSlotsByName(LosenClass);
    } // setupUi

    void retranslateUi(QMainWindow *LosenClass)
    {
        LosenClass->setWindowTitle(QCoreApplication::translate("LosenClass", "Losen", nullptr));
        BtnGrphClr->setText(QCoreApplication::translate("LosenClass", "Clear Graphic", nullptr));
        BtnClr->setText(QCoreApplication::translate("LosenClass", "Clear condition", nullptr));
        BtnInsert->setText(QCoreApplication::translate("LosenClass", "Insert condition", nullptr));
        BtnDrawGrph->setText(QCoreApplication::translate("LosenClass", "Draw Graphic ", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QCoreApplication::translate("LosenClass", " F=", nullptr));
        label_4->setText(QCoreApplication::translate("LosenClass", "     X              Y                N", nullptr));
        BtnClrAnsw->setText(QCoreApplication::translate("LosenClass", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LosenClass: public Ui_LosenClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOSEN_H
