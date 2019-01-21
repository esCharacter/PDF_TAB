#include "PDF_TAB.h"

PDF_TAB::PDF_TAB(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    initWidget();
}

void PDF_TAB::initWidget()
{
    inputTxt = ui.plainTextInput;
    outputTxt = ui.plainTextOutput;
}

void PDF_TAB::inputChange()
{
    QString inTxt = inputTxt->toPlainText();
    QString outTxt;

    for (int i = 0; i < inTxt.size(); i++)
    {
        if (inTxt[i] == '\n')
        {
            outTxt[i] = ' ';
        }
        else if (inTxt[i] == '.'&&i > 1 && inTxt[i - 2] == 'a'&&inTxt[i - 1] == 'l')
        {
            outTxt[i] = ' ';
        }
        else if (inTxt[i] == '.'&&i > 1 && inTxt[i - 2] == 'E'&&inTxt[i - 1] == 'q')
        {
            outTxt[i] = ' ';
        }
        else if (inTxt[i] == '.'&&i > 2 && inTxt[i - 3] == 'E'&&inTxt[i - 2] == 'q'&&inTxt[i - 1] == 's')
        {
            outTxt[i] = ' ';
        }
        else if (inTxt[i] == ';')
        {
            outTxt[i] = ',';
        }
        else
        {
            outTxt[i] = inTxt[i];
        }
    }

    outputTxt->clear();
    outputTxt->appendPlainText(outTxt);
}

void PDF_TAB::onClear()
{
    inputTxt->clear();
}

void PDF_TAB::onCopyOut()
{
    outputTxt->selectAll();
    outputTxt->copy();
}