#include "window.h"

Window::Window(QWidget *parent) :
	QWidget(parent)
{
	this->initialize();
}

void    Window::initialize()
{
	layout = new QGridLayout(this);
	this->setLayout(layout);
	   textArea = new TextArea(this);
	   layout->addWidget(textArea,0,0);
	   textArea->show();
}
