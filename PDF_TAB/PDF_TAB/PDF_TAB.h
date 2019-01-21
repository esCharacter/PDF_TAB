#pragma once

#include <QtWidgets/QMainWindow>
#include <QPlainTextEdit>
#include "ui_PDF_TAB.h"

class PDF_TAB : public QMainWindow
{
	Q_OBJECT

public:
	PDF_TAB(QWidget *parent = Q_NULLPTR);

private:
	Ui::PDF_TABClass ui;

	QPlainTextEdit* inputTxt = NULL;
	QPlainTextEdit* outputTxt = NULL;

private:
	void initWidget();

	private slots:
	void inputChange();
	void onClear();
	void onCopyOut();
};
