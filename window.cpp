#include "window.h"

Window::Window(QWidget *parent) :
	QWidget(parent)
{
	this->initialize();
}

void    Window::initialize()
{
	this->core = new YagaCore();
	layout = new QGridLayout(this);
	this->setLayout(layout);

	textArea = new TextArea(this);
	layout->addWidget(textArea, 0, 0);

	response = new QLabel(this);
	layout->addWidget(response, 1, 0);

	submitButton = new QPushButton("Envoyer", this);
	layout->addWidget(submitButton, 2, 0);
	this->connect(
				this->submitButton, SIGNAL(clicked()),
				this, SLOT(submitAction()));
}

void	Window::submitAction()
{
	QString res;

	res = this->core->digestString(this->textArea->toPlainText());
	this->response->setText(res);
}
